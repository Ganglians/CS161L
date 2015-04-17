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

    Port ( 
			  A 		  : in   STD_LOGIC_VECTOR;
           B 		  : in   STD_LOGIC_VECTOR;
           opcode   : in   STD_LOGIC_VECTOR(0 to 2);
           result   : out  STD_LOGIC_VECTOR;
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
	
			variable tmp: std_logic_vector(7 downto 0);
			
			begin
			
			case opcode is
			
				-- Unsigned add
				when "000" =>
					
				-- Signed add
				when "001" =>
				
				-- Unsigned sub
				when "010" =>
				
				-- Signed sub
				when "011" =>
				
				-- Bitwise AND
				when "100" =>
				
				-- Bitwise OR
				when "101" =>
				
				-- Bitwise XOR
				when "110" =>
				
				-- Divide A by 2
				when "111" =>
				
				
			end case;
			
	end process;
	
end behavioral;
