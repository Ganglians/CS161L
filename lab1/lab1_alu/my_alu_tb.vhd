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
use ieee.std_logic_arith.all; 
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
		
		-- Unsigned add___________________________________________________________________________________________________________
		
			report "Unsigned Add Test Cases";
			opcode <= "000"; -- Unsigned add opcode
			
			-- Case1:--------------------------------------------------------------------------------------------------------------
			-- Zero and carryout are set
			
			A <= "1111";
			B <= "0001";
			-- 1111 + 0001 = 1 0000 (zero: 1, carryout: 1)
			
			wait for clock_period/2;
			
			Assert(zero = '1' and carryout = '1' and overflow = '1' and result = "0000") report "(1)Unsigned add error"
			severity error;
			
			wait for clock_period/2;			
	
			-- Case2:--------------------------------------------------------------------------------------------------------------
			-- Nothing is set
			
			A <= "0111";
			B <= "0001";
			-- 0111 + 0001 = 1000 (carryout: 0)
			
			wait for clock_period/2;
			
			Assert(zero = '0' and carryout = '0' and overflow = '0' and result = "1000") report "(2)Unsigned add error"
			severity error;
			
			wait for clock_period/2;
			
			-- Case3:--------------------------------------------------------------------------------------------------------------
			-- Nothing is set
			A <= "0010";
			B <= "0001";
			-- 0010 + 0001 = 0011
			
			wait for clock_period/2;
			
			Assert(zero = '0' and carryout = '0' and overflow = '0' and result = "0011") report "(3)Unsigned add error"
			severity error;
			
			wait for clock_period/2;
			
			-- Case4:--------------------------------------------------------------------------------------------------------------
			A <= "0000";
			B <= "0000";
			-- 0000 + 0000 = 0000
			
			wait for clock_period/2;
			
			Assert(zero = '1' and carryout = '0' and overflow = '0' and result = "0000") report "(4)Unsigned add error"
			severity error;
			
			wait for clock_period/2;
			
			-- Signed add___________________________________________________________________________________________________________
				report "Signed Add Test Cases";
				opcode <= "001"; -- Signed add opcode
			
				-- Case1:-----------------------------------------------------------------------------------------------------------
				A <= "0111";
				B <= "0001";
				-- 0111 + 0001 = 1000 (overflow: 1)
			
				wait for clock_period/2;
			
				Assert(carryout = '0' and overflow = '1' and result = "1000") report "(1)Signed add error"
				severity error;
			
				wait for clock_period/2;
				
				-- Case2:-----------------------------------------------------------------------------------------------------------
				A <= "0010";
				B <= "0001";
				-- 0010 + 0001 = 0011
			
				wait for clock_period/2;
			
				Assert(carryout = '0' and overflow = '0' and result = "0011") report "(2)Signed add error"
				severity error;
			
				wait for clock_period/2;
			
				-- Case3:-----------------------------------------------------------------------------------------------------------
				A <= "0000";
				B <= "0000";
				-- 0000 + 0000 = 0000
				
				wait for clock_period/2;
				
				Assert(zero = '1' and carryout = '0' and overflow = '0' and result = "0000") report "(3)Signed add error"
				severity error;			
				
				wait for clock_period/2;
				
		-- Unsigned subtract______________________________________________________________________________________________________
			report "Unsigned Subtract Test Cases";
			opcode <= "010"; -- Unsigned sub opcode
			
			-- ***
			-- Case1:--------------------------------------------------------------------------------------------------------------
			A <= "1111";
			B <= "0001";
			-- 1111 - 0001 = 1110
			
			wait for clock_period/2;
			
			
			Assert(zero = '0') report "(1)Unsigned sub error zero flag" severity error;
			Assert(carryout = '1') report "(1)Unsigned sub error carryout" severity error;
			Assert(overflow = '0') report "(1)Unsigned sub error overflow" severity error;
			Assert(result = "1110") report "(1)Unsigned sub error result" severity error;
			--Assert(zero = '0' and carryout = '0' and overflow = '0' and result = "1110") report "(1)Unsigned sub error"
			--severity error;
			
			wait for clock_period/2;
			
			-- ***
			-- Case2:--------------------------------------------------------------------------------------------------------------
			A <= "0111";
			B <= "0001";
			-- 
			
			wait for clock_period/2;
			
			Assert(zero = '0') report "(2)Unsigned sub zero error" severity error;
			Assert(carryout = '1') report "(2) Unsigned sub carryout error" severity error;
			Assert(overflow = '0') report "(2) Unsigned sub overflow error" severity error;
			Assert (result = "0110") report "(2) Unsigned sub result error" severity error;
			--and carryout = '0' and overflow = '0' and result = "0110") report "(2)Unsigned sub error"
			--severity error;
			
			wait for clock_period/2;
			
			-- Case3:--------------------------------------------------------------------------------------------------------------
			A <= "0010";
			B <= "0001";
			-- 0010 - 0001 = 0001
			
			wait for clock_period/2;
			
			Assert(carryout = '1' and overflow = '0' and result = "0001") report "(3)Unsigned sub error"
			severity error;
			
			wait for clock_period/2;
			
			-- Case4:---------------------------------------------------
			A <= "0000";
			B <= "0000";
			-- 
			
			wait for clock_period/2;
			
			Assert(zero = '1' and carryout = '1' and overflow = '0' and result = "0000") report "(4)Unsigned sub error"
			severity error;
			
			wait for clock_period/2;
			
			-- ***
			-- Case5:---------------------------------------------------
			A <= conv_std_logic_vector(15, 4);
			B <= conv_std_logic_vector(8, 4);
			
		
			wait for clock_period/2;
			
			Assert(zero = '0') report "(5)Unsigned sub error zero flag"
			severity error;	
			Assert(carryout = '1') report "(5) Unsigned sub error carryout"
			severity error;	
			Assert(overflow = '0') report "(5) Unsigned sub error overflow"
			severity error;	
			Assert(result = conv_std_logic_vector(7, 4)) report "(5) Unsigned sub error result"
			severity error;
		
			wait for clock_period/2;


			--Case 6:--------------------------------------------------
			A <= conv_std_logic_vector(8, 4);
			B <= conv_std_logic_vector(12, 4);
			
		
			wait for clock_period/2;
			
			Assert(zero = '0') report "(6)Unsigned sub error zero flag"
			severity error;	
			Assert(carryout = '0') report "(6) Unsigned sub error carryout"
			severity error;	
			Assert(overflow = '1') report "(6) Unsigned sub error overflow"
			severity error;	
			Assert(result = conv_std_logic_vector(-4, 4)) report "(6) Unsigned sub error result"
			severity error;
		
			wait for clock_period/2;			
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
				
				wait for clock_period/2;
				
				-- Case2:
				A <= conv_std_logic_vector(2,4);
				B <= conv_std_logic_vector(-1,4);
				-- 0010 - 1001 = ?
			
				wait for clock_period/2;
			
				--Assert(carryout = '0' and overflow = '0' and result = conv_std_logic_vector(3,4)) report "(2)Signed sub error"
				
				Assert(carryout = '0') report "(2) Signed sub error carryout" severity error;
				Assert(overflow = '0') report "(2) Signed sub error overflow" severity error;
				Assert(result = "0011") report "(2) Signed sub error result" severity error;
			
				wait for clock_period/2;
				
				-- Case3: 
				A <= "0000";
				B <= "0000";
				-- 0000 + 0000 = 0000
				
				wait for clock_period/2;
				
				Assert(zero = '1' and carryout = '0' and overflow = '0' and result = "0000") report "(3)Signed sub error"
				severity error;
				
				wait for clock_period/2;	
				
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
				
				wait for clock_period/2;
				
				-- Case2:
				
				A <= "0011";
				B <= "1100";
				-- 0011 && 1100 = 0000
				
				wait for clock_period/2;
				
				Assert (zero = '1' and result = "0000") report "(2) Bitwise and error"
				severity error;
				
				wait for clock_period/2;
				
				-- Case3:
				
				A <= "1111";
				B <= "1111";
				-- 1111 & 1111 = 1111
				
				wait for clock_period/2;
				
				Assert (zero = '0' and result = "1111") report "(3) Bitwise and error"
				severity error;
				
				wait for clock_period/2;
				
				-- Or______________________
				report "Bitwise OR Test Cases";
				opcode <= "101";
				
				wait for clock_period/2;
				
				-- Case 1:
				
				A <= "1100";
				B <= "0011";
				-- 1100 || 0011 = 1111
				
				wait for clock_period/2;
				
				Assert (zero = '0' and result = "1111") report "(1) Bitwise or error"
				severity error;
				
				wait for clock_period/2;
				
				-- Case2:
				
				A <= "0000";
				B <= "0000";
				-- 0000 && 0000 = 0000
				
				wait for clock_period/2;
				
				Assert (zero = '1' and result = "0000") report "(2) Bitwise or error"
				severity error;
				
				wait for clock_period/2;
				
				-- XOR_________________________________________
				report "Bitwise XOR Test Cases";
				opcode <= "110";
				
				-- Case1:---------------------------
				
				A <= "0011";
				B <= "0011";	
				-- 0011 XOR 0011 = 0000
				
				wait for clock_period/2;
				
				Assert (zero = '1' and result = "0000") report "(1) Bitwise xor error"
				severity error;
				
				wait for clock_period/2;
				
				-- Case2:------------------------
				
				A <= "1111";
				B <= "0000";
				-- 1111 XOR 0000 = 1111
				
				wait for clock_period/2;
				
				Assert (zero = '0' and result = "1111") report "(2) Bitwise xor error"
				severity error;
				
				wait for clock_period/2;
				
				-- Case3:-------------------------
				
				A <= "0000";
				B <= "0000";
				-- 0000 XOR 0000 = 0000
				
				wait for clock_period/2;
				
				Assert (zero = '1' and result = "0000") report "(3) Bitwise xor error"
				severity error;
				
				wait for clock_period/2;
				
				-- Div2_________________________
				report "Div2 Test Cases";
				opcode <= "111";
				
				-- Case1:
				
				A <= "0100";
				
				wait for clock_period/2;
				-- 0100/2 = 0010
				
				Assert (zero = '0' and result = "0010") report "(1) Div2 error"
				severity error;
				
				wait for clock_period/2;
				
      wait;
   end process;

END;