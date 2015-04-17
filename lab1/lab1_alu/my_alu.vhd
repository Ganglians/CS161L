----------------------------------------------------------------------------------
-- Company: UCR
-- Engineer: Shilpa Chirackel && Juan Chavez
-- 
-- Create Date:    14:58:31 04/16/2015 
-- Design Name: 	 ALU
-- Module Name:    my_alu - Behavioral 
-- Project Name:   Lab1
-- Target Devices: VHDL
-- Tool versions: 
-- Description: Perform bitwise operations depending on a given bit code.
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
-- use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

-- Entity
entity my_alu is
generic(NUMBITS: natural:=32);
    Port ( 
			  A 		  : in   STD_LOGIC_VECTOR(NUMBITS-1 downto 0);
           B 		  : in   STD_LOGIC_VECTOR(NUMBITS-1 downto 0);
           opcode   : in   STD_LOGIC_VECTOR(2 downto 0);
           result   : out  STD_LOGIC_VECTOR(NUMBITS-1 downto 0);
           carryout : out  STD_LOGIC;
           overflow : out  STD_LOGIC;
           zero 	  : out  STD_LOGIC
			);
			  		  
end my_alu;

-- Specifies the operation's width
-- generic NUMBITS : n := 4;

architecture behavioral of my_alu is

begin

	process(opcode)
	
			variable tmp: std_logic_vector(NUMBITS-1 downto 0);
			
			begin
			
			case opcode is
			
				-- Unsigned add
				when "000" =>
					tmp := std_logic_vector(('0' & A) + ('0' & B));
					
				-- Signed add
				when "001" =>
					zero <= '0';
				
				-- Unsigned sub
				when "010" =>
					zero <= '0';
				
				-- Signed sub
				when "011" =>
					zero <= '0';
				
				-- Bitwise AND
				when "100" =>
					tmp := A and B;
					
					if(tmp = 0) then
						zero <= '1';
					else
						zero <= '0';
					end if;	
				
				-- Bitwise OR
				when "101" =>
					tmp := A or B;
					
					if(tmp = 0) then
						zero <= '1';
					else
						zero <= '0';
					end if;
				
				-- Bitwise XOR
				when "110" =>
					tmp := A xor B;
					
					if(tmp = 0) then
						zero <= '1';
					else
						zero <= '0';
					end if;
				
				-- Divide A by 2
				when "111" =>
					zero <= '0';
					
					result <= tmp;
				
				when others =>
					zero <= '0';
			end case;
			
	end process;
	
end behavioral;
