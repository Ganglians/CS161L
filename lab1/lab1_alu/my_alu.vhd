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
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

-- Entity
entity my_alu is

    Port ( 
			  A 			: in  STD_LOGIC;
           B 			: in  STD_LOGIC;
           opcode 	: in  STD_LOGIC;
           result 	: out  STD_LOGIC;
           carryout 	: out  STD_LOGIC;
           overflow 	: out  STD_LOGIC;
           zero 		: out  STD_LOGIC
			);
			  		  
end my_alu;

-- Specifies the operation's width
-- generic NUMBITS : n := 4;

architecture Behavioral of my_alu is

begin



end Behavioral;
