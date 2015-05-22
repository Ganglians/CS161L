----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:51:42 11/08/2013 
-- Design Name: 
-- Module Name:    control_unit - Behavioral 
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

entity control_unit is
  port (
    instr_op_cu          : in std_logic_vector(5 downto 0);
    reg_dst_cu           : out std_logic;
    branch_cu            : out std_logic;
    mem_read_cu          : out std_logic;
    mem_to_reg_cu        : out std_logic;
    alu_op_cu            : out std_logic_vector(1 downto 0);
    mem_write_cu         : out std_logic;
    alu_src_cu           : out std_logic;
    reg_write_cu         : out std_logic
    );
end control_unit;

architecture Behavioral of control_unit is

begin
	process(instr_op_cu)
	begin
		case instr_op_cu is
			when OPCODE_R_TYPE =>
				reg_dst_cu <= '1';
				alu_src_cu <= '0';
				mem_to_reg_cu <= '0';
				reg_write_cu <= '1';
				mem_read_cu <= '0';
				mem_write_cu <= '0';
				branch_cu <= '0';
				alu_op_cu <= "10";
			
			when OPCODE_ADDI =>
				reg_dst_cu <= '1';
				alu_src_cu <= '1';
				mem_to_reg_cu <= '0';
				reg_write_cu <= '1';
				mem_read_cu <= '0';
				mem_write_cu <= '0';
				branch_cu <= '0';
				alu_op_cu <= "00";
						
			when OPCODE_LOAD_WORD =>
				reg_dst_cu <= '0';
				alu_src_cu <= '1';
				mem_to_reg_cu <= '1';
				reg_write_cu <= '1';
				mem_read_cu <= '1';
				mem_write_cu <= '0';
				branch_cu <= '0';
				alu_op_cu <= "00";
				
			when OPCODE_STORE_WORD =>
				reg_dst_cu <= '0';
				alu_src_cu <= '1';
				mem_to_reg_cu <= '0';
				reg_write_cu <= '0';
				mem_read_cu <= '0';
				mem_write_cu <= '1';
				branch_cu <= '0';
				alu_op_cu <= "00";
				
			when OPCODE_branch_EQ =>
				reg_dst_cu <= '0';
				alu_src_cu <= '0';
				mem_to_reg_cu <= '0';
				reg_write_cu <= '0';
				mem_read_cu <= '0';
				mem_write_cu <= '0';
				branch_cu <= '1';
				alu_op_cu <= "01";
				
			when others =>
				reg_dst_cu <= '0';
				alu_src_cu <= '0';
				mem_to_reg_cu <= '0';
				reg_write_cu <= '0';
				mem_read_cu <= '0';
				mem_write_cu <= '0';
				branch_cu <= '0';
				alu_op_cu <= "00";
		end case;
	end process;
end Behavioral;

