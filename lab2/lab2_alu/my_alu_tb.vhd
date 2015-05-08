--------------------------------------------------------------------------------
-- Company: UCR 
-- Engineer: Michael Villanueva && Shilpa Chirackel && Juan Chavez
--
-- Create Date:   17:30:38 04/23/2015
-- Design Name:   ALU - TESTBENCH 
-- Module Name:   C:/Users/cathy/Documents/UCR/spring2015/CS161L/lab1/lab1_alu/my_alu_tb.vhd
-- Project Name:  lab2_alu
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

	generic(NUMBITS: natural:=32); --Specifies the operation's width
											 --<Lab2>: change the numbits to 32

END my_alu_tb;
 
ARCHITECTURE behavior OF my_alu_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT my_alu
	 
    PORT(
				A 			: IN  std_logic_vector(NUMBITS-1 downto 0);
				B 			: IN  std_logic_vector(NUMBITS-1 downto 0);
				opcode 	: IN  std_logic_vector(3 downto 0); --<Lab2>: opcode now 4 bits
				result 	: OUT  std_logic_vector(NUMBITS+3 downto 0); --<Lab2>: result 4 bits longer than A or B
				carryout : OUT  std_logic;
				overflow : OUT  std_logic;
				zero 		: OUT  std_logic		
        );
		  
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(NUMBITS-1 downto 0) := (others => '0');
   signal B : std_logic_vector(NUMBITS-1 downto 0) := (others => '0');
   signal opcode : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal result : std_logic_vector(NUMBITS+3 downto 0);
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

			
           -- Testing Unsigned Add

           report "Testing Unsigned Add";
           Opcode <= "1000";
           
               -- Test 1
               A <= x"00000091";
               B <= x"00000001";
               
               wait for 10 ns;
               assert Result = x"00000092"					                report "1: Result error"          severity error;
               assert carryout = '0'                                     report "1: carryout error"        severity error;
               assert Overflow = '0'                                     report "1: Overflow error"        severity error;
               assert Zero = '0'                                         report "1: Zero error"            severity error;
               
               
               -- Test 2
               A <= x"90000000";
               B <= x"10000000";
               wait for 10 ns;
               assert Result = x"00000000"         report "2: Result error"severity error;
               assert carryout = '0'                                     	report "2: carryout error"        severity error;
               assert Overflow = '0'                                       report "2: Overflow error"        severity error;
               assert Zero = '0'                                           report "2: Zero error"            severity error;
               
               -- Test 3
               A <= x"00000000";
               B <= x"00000000";
               wait for 10 ns;
               assert Result = x"000000000" report "3: Result error"      severity error;
               assert carryout = '0'                                      report "3: carryout error"        severity error;
               assert Overflow = '0'                                      report "3: Overflow error"        severity error;
               assert Zero = '1'                                          report "3: Zero error"            severity error;
           
             
           -- hold reset state for 100ms.
           wait for 10 ns;
             
           -- Testing Signed Add

           report "Testing Signed Add";
           Opcode <= "1100";
           
               -- Test 1
               A <= x"10000091";
               B <= x"00000001";
               
               wait for 10 ns;
               assert Result = x"000000090"         report "1: Result error"          severity error; --Error does not make 1 the msb
               assert carryout = '1'                report "1: carryout error"        severity error;
               assert Overflow = '0'                report "1: Overflow error"        severity error;
               assert Zero = '0'                    report "1: Zero error"            severity error;
               
               
               -- Test 2
               A <= x"19999999";
               B <= x"19999999";
               wait for 10 ns;
               assert Result = x"019999998"       report "2: Result error"          severity error;
               assert carryout = '1'              report "2: carryout error"        severity error;
               assert Overflow = '0'              report "2: Overflow error"        severity error;
               assert Zero = '0'                  report "2: Zero error"            severity error;
               
           
           wait for 10 ns;
             
           -- Testing Unsigned Sub

           report "Testing Unsigned Sub";
           Opcode <= "1001";
           
               -- Test 1
               A <= x"00000030";
               B <= x"00000001";
               
               wait for 10 ns;
               assert Result = x"000000029"         report "1: Result error"          severity error;
               assert carryout = '0'                report "1: carryout error"        severity error;
               assert Overflow = '0'                report "1: Overflow error"        severity error;
               assert Zero = '0'                    report "1: Zero error"            severity error;
               
               
               -- Test 2
               A <= x"00001000";
               B <= x"00001000";
               wait for 10 ns;
               assert Result = x"000000000"         report "2: Result error"          severity error;
               assert carryout = '0'                report "2: carryout error"        severity error;
               assert Overflow = '0'                report "2: Overflow error"        severity error;
               assert Zero = '1'                    report "2: Zero error"            severity error;
               
                           
                   -- hold reset state for 100ms.
           wait for 10 ns;
 
           -- Testing Signed Sub

           report "Testing Signed Sub";
           Opcode <= "1101";
           
               -- Test 1
               A <= x"10600000";
               B <= x"00600000";
               
               wait for 10 ns;
               assert Result = x"012000010"         report "1: Result error"          severity error;
               assert carryout = '1'                report "1: carryout error"        severity error;
               assert Overflow = '0'                report "1: Overflow error"        severity error;
               assert Zero = '0'                    report "1: Zero error"            severity error;
               
               
               -- Test 2
               A <= x"19999999";
               B <= x"09999999";
               wait for 10 ns;
               assert Result = x"019999998"         report "2: Result error"          severity error;
               assert carryout = '1'                report "2: carryout error"        severity error;
               assert Overflow = '0'                report "2: Overflow error"        severity error;
               assert Zero = '0'                    report "2: Zero error"            severity error;
					
					
					  -- Test 3
               A <= x"10000004";
               B <= x"10000004";
               wait for 10 ns;
               assert Result = x"000000008"         report "3: Result error"          severity error;
               assert carryout = '0'                report "3: carryout error"        severity error;
               assert Overflow = '0'                report "3: Overflow error"        severity error;
               assert Zero = '1'                    report "3: Zero error"            severity error;
					
             
           wait for 10 ns;        
   
       wait;		
				
   end process;

END;
