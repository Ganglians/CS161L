----------------------------------------------------------------------------------
-- Company: UCR
-- Engineer: Michael Villanueva && Shilpa Chirackel && Juan Chavez
-- 
-- Create Date:    14:58:31 04/16/2015 
-- Design Name: 	 ALU
-- Module Name:    my_alu - Behavioral 
-- Project Name:   Lab2
-- Target Devices: VHDL
-- Tool versions: 
-- Description: Augment lab1 to handle bcd (binary coded decimal
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;

use IEEE.NUMERIC_STD.ALL;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity my_alu is

	generic(NUMBITS: natural:=4); --Specifies the operation's width
	
    Port ( 
				--Size is NUMBITS-1, the last bit found in NUMBITS is reserved for the carryout
				
				A 			: in   STD_LOGIC_VECTOR(NUMBITS-1 downto 0);
				B 			: in   STD_LOGIC_VECTOR(NUMBITS-1 downto 0);
				opcode   : in   STD_LOGIC_VECTOR(3 downto 0); --Lab2: opcode now 4 bits
				result   : out  STD_LOGIC_VECTOR(NUMBITS-1 downto 0);
				carryout : out  STD_LOGIC; --Only matters with unsigned
				overflow : out  STD_LOGIC; --Only matters with singed
				zero 		: out  STD_LOGIC	
				
		    );
			  		  
end my_alu;

architecture behavioral of my_alu is
	-- Store intermediate value
	signal tmp: std_logic_vector(NUMBITS downto 0);
	
begin

	process(opcode, tmp, A, B)

		begin
			
			case opcode is
			
				-- Unsigned add_____________________________________________________________________________________________________
				
				when "1000" =>
				
					tmp <= std_logic_vector(('0' & A) + ('0' & B));
					
					result <= tmp(NUMBITS-1 downto 0);
					
					-- Only carryout matters for unsigned, overflow should be turned off
					carryout <= tmp(NUMBITS);
					overflow <= tmp(NUMBITS);
					
					-- Set the zero flag accordingly
					if(tmp(NUMBITS-1 downto 0)(NUMBITS-1 downto 0) = 0) then
						zero <= '1';
					else
						zero <= '0';
					end if;	
					
				-- Signed add_______________________________________________________________________________________________________
				
				when "1100" =>
				
					tmp <= std_logic_vector(signed(A(NUMBITS - 1)&A) 
					+ signed(B(NUMBITS - 1)&B));
					
					result <= tmp(NUMBITS-1 downto 0);
					
					-- The cases in which the overflow flag will be set for signed add
               if((signed(A) >= 0 and signed(B) >= 0) and (signed(tmp(NUMBITS-1 downto 0)) < 0)) or
               ((signed(A) < 0 and signed(B) < 0) and (signed(tmp(NUMBITS-1 downto 0)) >= 0))
               then overflow <= '1';
               else overflow <= '0';
               end if;
					
					carryout <= tmp(NUMBITS);
					
					-- Set the zero flag accordingly
					if(tmp(NUMBITS-1 downto 0)(NUMBITS-1 downto 0) = 0) then
						zero <= '1';
					else
						zero <= '0';
					end if;
					
				-- Unsigned sub_____________________________________________________________________________________________________
				
				when "1001" =>
				
					tmp <= std_logic_vector(('0' & A) - ('0' & B));
					
					result <= tmp(NUMBITS-1 downto 0);
					
					carryout <= not tmp(NUMBITS);
					overflow <= tmp(NUMBITS);
					
					if(tmp(NUMBITS-1 downto 0) = 0) then
						zero <= '1';
					else
						zero <= '0';
					end if;	
					
				-- Signed sub_______________________________________________________________________________________________________
				
				when "1101" =>
				
					tmp <= std_logic_vector(signed(A(NUMBITS - 1)&A) 
					- signed(B(NUMBITS - 1)&B));
					
					result <= tmp(NUMBITS-1 downto 0);
					
					if ((signed(A) >= 0 and signed(B) < 0) and (signed(tmp(NUMBITS-1 downto 0)) < 0)) or
               ((signed(A) < 0 and signed(B) >= 0) and (signed(tmp(NUMBITS-1 downto 0)) >= 0))
               then overflow <= '1';
               else overflow <= '0';
					end if;
					
					carryout <= tmp(NUMBITS);
					
					if(tmp(NUMBITS-1 downto 0)(NUMBITS-1 downto 0) = 0) then
						zero <= '1';
					else
						zero <= '0';
					end if;
				
				
				
				when others =>
				
					result <= tmp(NUMBITS-1 downto 0);
				
			end case;
			
	end process;
	
end behavioral;
