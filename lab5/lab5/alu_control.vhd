----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:52:30 11/08/2013 
-- Design Name: 
-- Module Name:    alu_control - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
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
use work.cpu_constant_library.all;

entity alu_control is
  port 
    (
		 alu_op_alu            : in std_logic_vector(1 downto 0);
		 instruction_5_0_alu   : in std_logic_vector(5 downto 0);
		 alu_out_alu           : out std_logic_vector(3 downto 0)
    );
end alu_control;

architecture Behavioral of alu_control is

begin
	process(alu_op_alu, instruction_5_0_alu)
	begin
	
		case alu_op_alu is
			when "00" => alu_out_alu <= ALU_ADD;
			when "01" => alu_out_alu <= ALU_SUB;
			when "10" => 
				case instruction_5_0_alu is
					when FUNCT_ADD  => alu_out_alu <= ALU_ADD;
					when FUNCT_ADDU => alu_out_alu <= ALU_ADDU;
					when FUNCT_SUB  => alu_out_alu <= ALU_SUB;
					when FUNCT_AND  => alu_out_alu <= ALU_AND;
					when FUNCT_OR   => alu_out_alu <= ALU_OR;
					when FUNCT_NOR  => alu_out_alu <= ALU_NOR;
					when FUNCT_SLT  => alu_out_alu <= ALU_SLT;
					when others     => alu_out_alu <= "0000";
				end case;
			when others => alu_out_alu <= "0000";
		end case;
	
	end process;
end Behavioral;
