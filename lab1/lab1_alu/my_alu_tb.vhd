--------------------------------------------------------------------------------
-- Company: UCR 
-- Engineer: Shilpa Chirackel && Juan Chavez
--
-- Create Date:   17:30:38 04/23/2015
-- Design Name:   ALU - TESTBENCH 
-- Module Name:   C:/Users/cathy/Documents/UCR/spring2015/CS161L/lab1/lab1_alu/my_alu_tb.vhd
-- Project Name:  lab1_alu
-- Target Device:  
-- Tool versions:  
-- Description: Test alu to see whether it functions properly.
-- 
-- VHDL Test Bench Created by ISE for module: my_alu
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;

use IEEE.NUMERIC_STD.ALL;
USE ieee.std_logic_1164.ALL;
use ieee.std_logic_unsigned.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY my_alu_tb IS

	generic(NUMBITS: natural:=4); --Specifies the operation's width

END my_alu_tb;
 
ARCHITECTURE behavior OF my_alu_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT my_alu
	 
    PORT(
	 
				A 			: IN  std_logic_vector(NUMBITS-1 downto 0);
				B 			: IN  std_logic_vector(NUMBITS-1 downto 0);
				opcode 	: IN  std_logic_vector(2 downto 0);
				result 	: OUT  std_logic_vector(NUMBITS-1 downto 0);
				carryout : OUT  std_logic;
				overflow : OUT  std_logic;
				zero 		: OUT  std_logic
			
        );
		  
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(NUMBITS-1 downto 0) := (others => '0');
   signal B : std_logic_vector(NUMBITS-1 downto 0) := (others => '0');
   signal opcode : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal result : std_logic_vector(NUMBITS-1 downto 0);
   signal carryout : std_logic;
   signal overflow : std_logic;
   signal zero : std_logic;
   -- No clocks detected in port list. Replace clock below with 
   -- appropriate port name 
 
   --constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: my_alu PORT MAP (
          A => A,
          B => B,
          opcode => opcode,
          result => result,
          carryout => carryout,
          overflow => overflow,
          zero => zero
        );

   -- Clock process definitions
   --clock_process :process
   --begin
		--clock <= '0';
		--wait for clock_period/2;
		--clock <= '1';
		--wait for clock_period/2;
   --end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      --wait for clock_period*10;

      -- insert stimulus here 
		-- Unsigned add_________________________________________
			report "Unsigned Add Test Cases";
			--In this case, the carry flag should be set
			opcode <= "000";
			A <= "1111";
			B <= "0001";
			
			wait for 10 ns;
			Assert(carryout = '1' and overflow = '0') report "Unsigned add error"
			severity Warning;
			
			A <= "0111";
			B <= "0001";
			
			wait for 10 ns;
			Assert(carryout = '0' and overflow = '0') report "Unsigned add error"
			severity Warning;
			
			A <= "0010";
			B <= "0001";
			
			wait for 10 ns;
			Assert(carryout = '0' and overflow = '0') report "Unsigned add error"
			severity Warning;
			
      wait;
   end process;

END;
