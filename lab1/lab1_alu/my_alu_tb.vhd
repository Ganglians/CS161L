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
	signal clock : std_logic;
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: my_alu PORT MAP 
	(
          A 		 => A,
          B 		 => B,
          opcode 	 => opcode,
          result 	 => result,
          carryout => carryout,
          overflow => overflow,
          zero     => zero
   );

   -- Clock process definitions
   clock_process :process
   begin
	
		clock <= '0';
		wait for clock_period/2;
		
		clock <= '1';
		wait for clock_period/2;
		
   end process;
 

   -- Stimulus process
   stim_proc: process
	
   begin		
      -- hold reset state for 100 ns.

      wait for clock_period*10;

      -- insert stimulus here 
		
		-- Unsigned add_________________________________________
			report "Unsigned Add Test Cases";
			opcode <= "000"; -- Unsigned add opcode
			
			-- Case1: carryout and zero flag are set-------------
			A <= "1111";
			B <= "0001";
			-- 1111 + 0001 = 1 0000 (zero: 1, carryout: 1)
			
			wait for clock_period/2;
			
			Assert(zero = '1' and carryout = '1' and overflow = '1' and result = "0000") report "(1)Unsigned add error"
			severity error;
			
			-- Case2: nothing is set
			A <= "0111";
			B <= "0001";
			-- 0111 + 0001 = 1000 (carryout: 0)
			
			wait for clock_period/2;
			
			Assert(zero = '0' and carryout = '0' and overflow = '0' and result = "1000") report "(2)Unsigned add error"
			severity error;
			
			-- Case3: testing addition of ones and zeroes--------
			A <= "0010";
			B <= "0001";
			-- 0010 + 0001 = 0011
			
			wait for clock_period/2;
			
			Assert(zero = '0' and carryout = '0' and overflow = '0' and result = "0011") report "(3)Unsigned add error"
			severity error;
			
			-- Case4: testing the zero flag----------------------
			A <= "0000";
			B <= "0000";
			-- 0000 + 0000 = 0000
			
			wait for clock_period/2;
			
			Assert(zero = '1' and carryout = '0' and overflow = '0' and result = "0000") report "(4)Unsigned add error"
			severity error;
			
			-- Signed add_________________________________________
				report "Signed Add Test Cases";
				opcode <= "001"; -- Signed add opcode
			
				-- Case1: overflow is set-------------------------
				A <= "0111";
				B <= "0001";
				-- 0111 + 0001 = 1000 (overflow: 1)
			
				wait for clock_period/2;
			
				Assert(carryout = '0' and overflow = '1' and result = "1000") report "(1)Signed add error"
				severity error;
			
			
				-- Case2: testing addition of ones and zeroes------
				A <= "0010";
				B <= "0001";
				-- 0010 + 0001 = 0011
			
				wait for clock_period/2;
			
				Assert(carryout = '0' and overflow = '0' and result = "0011") report "(2)Signed add error"
				severity error;
			
				-- Case3: testing the zero flag-----------------------
				A <= "0000";
				B <= "0000";
				-- 0000 + 0000 = 0000
				
				wait for clock_period/2;
				
				Assert(zero = '1' and carryout = '0' and overflow = '0' and result = "0000") report "(3)Signed add error"
				severity error;			
				
				
		-- Unsigned subtract_________________________________________
			report "Unsigned Subtract Test Cases";
			opcode <= "010"; -- Unsigned sub opcode
			
			-- Case1:
			A <= "1111";
			B <= "0001";
			-- 
			
			wait for clock_period/2;
			
			Assert(zero = '0' and carryout = '0' and overflow = '0' and result = "1110") report "(1)Unsigned sub error"
			severity error;
			
			-- Case2:
			A <= "0111";
			B <= "0001";
			-- 
			
			wait for clock_period/2;
			
			Assert(zero = '0' and carryout = '0' and overflow = '0' and result = "0110") report "(2)Unsigned sub error"
			severity error;
			
			-- Case3: testing addition of ones and zeroes--------
			A <= "0010";
			B <= "0001";
			-- 
			
			wait for clock_period/2;
			
			Assert(carryout = '0' and overflow = '0' and result = "0001") report "(3)Unsigned sub error"
			severity error;
			
			-- Case4: testing the zero flag----------------------
			A <= "0000";
			B <= "0000";
			-- 
			
			wait for clock_period/2;
			
			Assert(zero = '1' and carryout = '0' and overflow = '0' and result = "0000") report "(4)Unsigned sub error"
			severity error;
			
			
			-- Signed subtract___________________________________
				report "Signed Subtract Test Cases";
				opcode <= "011"; -- Signed sub opcode
			
				-- Case1: 
				A <= "0111";
				B <= "0001";
				-- 0111 - 0001 = 0110
			
				wait for clock_period/2;
			
				Assert(zero = '0' and carryout = '0' and overflow = '0' and result = "0110") report "(1)Signed sub error"
				severity error;
			
				-- Case2:
				A <= "0010";
				B <= "1001";
				-- 0010 - 1001 = ?
			
				wait for clock_period/2;
			
				Assert(carryout = '1' and overflow = '1' and result = "0111") report "(2)Signed sub error"
				severity error;
			
				-- Case3: 
				A <= "0000";
				B <= "0000";
				-- 0000 + 0000 = 0000
				
				wait for clock_period/2;
				
				Assert(zero = '1' and carryout = '0' and overflow = '0' and result = "0000") report "(3)Signed sub error"
				severity error;			
				
				-- And___________________________
				report "Bitwise AND Test Cases";
				opcode <= "100";
				
				-- Case1:
				
				A <= "0000";
				B <= "0000";
				-- 0000 && 0000 = 0000
				
				wait for clock_period/2;
				
				Assert (zero = '1' and result = "0000") report "(1)Bitwise and error"
				severity error;
				
				-- Case2:
				
				A <= "0011";
				B <= "1100";
				
				-- 0011 && 1100 = 0000
				
				wait for clock_period/2;
				
				Assert (zero = '1' and result = "0000") report "(2) Bitwise and error"
				severity error;
				
				-- Case3:
				
				A <= "1111";
				B <= "1111";
				
				-- 1111 & 1111 = 1111
				
				wait for clock_period/2;
				
				Assert (zero = '0' and result = "1111") report "(3) Bitwise and error"
				severity error;
				
				-- Or______________________
				report "Bitwise OR Test Cases";
				opcode <= "101";
				
				-- Case 1:
				
				A <= "1100";
				B <= "0011";
				
				-- 1100 || 0011 = 1111
				
				wait for clock_period/2;
				
				Assert (zero = '0' and result = "1111") report "(1) Bitwise or error"
				severity error;
				
				-- Case2:
				
				A <= "0000";
				B <= "0000";
				
				-- 0000 && 0000 = 0000
				
				wait for clock_period/2;
				
				Assert (zero = '1' and result = "0000") report "(2) Bitwise or error"
				severity error;
				
				-- XOR_____________________________
				report "Bitwise XOR Test Cases";
				opcode <= "110";
				
				-- Case1:
				
				A <= "0011";
				B <= "0011";
				
				-- 0011 XOR 0011 = 0000
				
				wait for clock_period/2;
				
				Assert (zero = '1' and result = "0000") report "(1) Bitwise xor error"
				severity error;
				
				-- Case2:
				
				A <= "1111";
				B <= "0000";
				
				-- 1111 XOR 0000 = 1111
				
				wait for clock_period/2;
				
				Assert (zero = '0' and result = "1111") report "(2) Bitwise xor error"
				severity error;
				
				wait for clock_period/2;
				
				-- Case3:
				
				A <= "0000";
				B <= "0000";
				
				-- 0000 XOR 0000 = 0000
				
				Assert (zero = '1' and result = "0000") report "(3) Bitwise xor error"
				severity error;
				
				wait for clock_period/2;
				
				-- Div2_________________________
				report "Div2 Test Cases";
				opcode <= "111";
				
				-- Case1:
				
				A <= "0100";
				
				-- 0100/2 = 0010
				
				Assert (zero = '0' and result = "0010") report "(1) Div2 error"
				severity error;
				
				wait for clock_period/2;
				
      wait;
   end process;

END;
