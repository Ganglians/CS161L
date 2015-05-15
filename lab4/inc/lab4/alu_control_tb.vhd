-- Names: Juan Chavez && Shilpa Chirackel && Michael Villanueva
-- Lab 4
-- alu_control_tb.vhd
-- 5/15/2015

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY alu_control_tb IS
END alu_control_tb;
 
ARCHITECTURE behavior OF alu_control_tb IS 

	 -- declare component for unit under test 
    COMPONENT alu_control
	 
		 PORT(
		 
					alu_op 			 : IN  std_logic_vector(1 downto 0);
					instruction_5_0 : IN  std_logic_vector(5 downto 0);
					alu_out 			 : OUT  std_logic_vector(3 downto 0)
				
			  );
		  
    END COMPONENT;
    

   --Inputs
   signal alu_op : std_logic_vector(1 downto 0) := (others => '0');
   signal instruction_5_0 : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal alu_out : std_logic_vector(3 downto 0);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: alu_control PORT MAP (
	
          alu_op => alu_op,
          instruction_5_0 => instruction_5_0,
          alu_out => alu_out
			 
        );

   -- Stimulus process
   stim_proc: process
   begin		
	
      -- hold reset state for 10 ns.
      wait for 10 ns;	
		
---------------------------------------------------------------------------------------------------------
-- Testing load and store
---------------------------------------------------------------------------------------------------------
	
		report "running test on lw and sw";
		
		alu_op <= "00";
		instruction_5_0 <= "000000"; -- don't care about function for lw/sw
			-- Test 1 for lw and sw		
			wait for 10 ns;
			assert alu_out = "0010" 	report "alu_control_tb: alu_out incorrect" 	severity error;
			
---------------------------------------------------------------------------------------------------------
-- Testing branch equal
---------------------------------------------------------------------------------------------------------
		
		report "running test on branch equal";	
		
		alu_op <= "01";
		instruction_5_0 <= "000000"; -- don't care for branch on equal
		
			-- Test 1 for branch equal
			wait for 10 ns;
			assert alu_out = "0110" 	report "alu_control_tb: alu_out incorrect" 	severity error;
			
---------------------------------------------------------------------------------------------------------
-- Testing R-Type Add
---------------------------------------------------------------------------------------------------------	
	
		report "running test on R-Type Add";	
		
		alu_op <= "10";
		instruction_5_0 <= "100000";
		
			-- Test 1 for R-type add
			wait for 10 ns;
			assert alu_out = "0010" 	report "alu_control_tb: alu_out incorrect" 	severity error;
			
---------------------------------------------------------------------------------------------------------
-- Testing R-Type Subtract
---------------------------------------------------------------------------------------------------------
		
		report "running test on R-Type Subtract";
		
		alu_op <= "10";
		instruction_5_0 <= "100010"; 	
		
			-- Test 1 for R-type subtract
			wait for 10 ns;
			assert alu_out = "0110" 	report "alu_control_tb: alu_out incorrect" 	severity error;	
			
---------------------------------------------------------------------------------------------------------
-- Testing R-Type AND
---------------------------------------------------------------------------------------------------------	
	
		report "running test on R-Type AND";		
		
		alu_op <= "10";
		instruction_5_0 <= "100100"; 
		
			-- Test 1 for R-type AND
			wait for 10 ns;
			assert alu_out = "0000" 	report "alu_control_tb: alu_out incorrect" 	severity error;	
			
---------------------------------------------------------------------------------------------------------
-- Testing R-Type OR
---------------------------------------------------------------------------------------------------------	
	
		report "running test on R-Type OR";
		
		alu_op <= "10";
		instruction_5_0 <= "100101"; 
		
			-- Test 1 for R-type OR
			wait for 10 ns;
			assert alu_out = "0001" 	report "alu_control_tb: alu_out incorrect" 	severity error;		
			
---------------------------------------------------------------------------------------------------------
-- Testing R-Type set on less than
---------------------------------------------------------------------------------------------------------
		
		report "running test on R-Type set on less than";		
		
		alu_op <= "10";
		instruction_5_0 <= "101010"; 	
		
			-- Test 1 for R-type set on less than
			wait for 10 ns;
			assert alu_out = "0111" 	report "alu_control_tb: alu_out incorrect" 	severity error;					
      wait;
   end process;

END;