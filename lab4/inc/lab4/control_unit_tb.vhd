-- Names: Juan Chavez && Shilpa Chirackel && Michael Villanueva
-- Lab 4
-- control_unit_tb.vhd
-- 5/15/2015

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY control_unit_tb IS
END control_unit_tb;
 
ARCHITECTURE behavior OF control_unit_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT control_unit
	 
		 PORT(
					instr_op 	: IN  std_logic_vector(5 downto 0);
					reg_dst 		: OUT  std_logic;
					branch 		: OUT  std_logic;
					mem_read 	: OUT  std_logic;
					mem_to_reg 	: OUT  std_logic;
					alu_op 		: OUT  std_logic_vector(1 downto 0);
					mem_write 	: OUT  std_logic;
					alu_src 		: OUT  std_logic;
					reg_write 	: OUT  std_logic
			  );
		  
    END COMPONENT;
    

   --Inputs
   signal instr_op : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal reg_dst : std_logic;
   signal branch : std_logic;
   signal mem_read : std_logic;
   signal mem_to_reg : std_logic;
   signal alu_op : std_logic_vector(1 downto 0);
   signal mem_write : std_logic;
   signal alu_src : std_logic;
   signal reg_write : std_logic;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: control_unit PORT MAP 
	    (
				 instr_op 	=> instr_op,
				 reg_dst 	=> reg_dst,
				 branch 		=> branch,
				 mem_read 	=> mem_read,
				 mem_to_reg => mem_to_reg,   
				 alu_op 		=> alu_op,
				 mem_write 	=> mem_write,
				 alu_src 	=> alu_src,
				 reg_write 	=> reg_write
        ); 

   -- Stimulus process
   stim_proc: process
   begin		
	
      -- hold reset state for 10 ns.
      wait for 10 ns;	

---------------------------------------------------------------------------------------------------------
-- Testing R-Format
---------------------------------------------------------------------------------------------------------	

		report "running test on r-format";
		instr_op <= "000000";
			
			wait for 10 ns;
			assert reg_dst = '1' 		report "control_unit_tb: reg_dst incorrect" 	severity error;
			assert alu_src = '0' 		report "control_unit_tb: alu_src incorrect" 	severity error;			
			assert mem_to_reg = '0' 	report "control_unit_tb: mem_to_reg incorrect" 	severity error;
			assert reg_write = '1' 		report "control_unit_tb: reg_write incorrect" 	severity error;
			assert mem_read = '0' 		report "control_unit_tb: mem_read incorrect" 	severity error;
			assert mem_write = '0' 		report "control_unit_tb: mem_write incorrect" 	severity error;
			assert branch = '0' 			report "control_unit_tb: branch incorrect" 	severity error;
			assert alu_op = "10"			report "control_unit_tb: alu_op incorrect" 	severity error;
			
---------------------------------------------------------------------------------------------------------
-- Testing lw
---------------------------------------------------------------------------------------------------------
	
		report "running test on load word";
		instr_op <= "100011";
			
			wait for 10 ns;
			assert reg_dst = '0' 		report "control_unit_tb: reg_dst incorrect" 	severity error;
			assert alu_src = '1' 		report "control_unit_tb: alu_src incorrect" 	severity error;			
			assert mem_to_reg = '1' 	report "control_unit_tb: mem_to_reg incorrect" 	severity error;
			assert reg_write = '1' 		report "control_unit_tb: reg_write incorrect" 	severity error;
			assert mem_read = '1' 		report "control_unit_tb: mem_read incorrect" 	severity error;
			assert mem_write = '0' 		report "control_unit_tb: mem_write incorrect" 	severity error;
			assert branch = '0' 			report "control_unit_tb: branch incorrect" 	severity error;
			assert alu_op = "00"			report "control_unit_tb: alu_op incorrect" 	severity error;
			
---------------------------------------------------------------------------------------------------------
-- Testing sw
---------------------------------------------------------------------------------------------------------	

		report "running test on store word";
		instr_op <= "101011";
				
			wait for 10 ns;
			assert reg_dst = '0' 		report "control_unit_tb: reg_dst incorrect" 	severity error; -- don't care
			assert alu_src = '1' 		report "control_unit_tb: alu_src incorrect" 	severity error;			
			assert mem_to_reg = '0' 	report "control_unit_tb: mem_to_reg incorrect" 	severity error; -- don't care
			assert reg_write = '0' 		report "control_unit_tb: reg_write incorrect" 	severity error;
			assert mem_read = '0' 		report "control_unit_tb: mem_read incorrect" 	severity error;
			assert mem_write = '1' 		report "control_unit_tb: mem_write incorrect" 	severity error;
			assert branch = '0' 			report "control_unit_tb: branch incorrect" 	severity error;
			assert alu_op = "00"			report "control_unit_tb: alu_op incorrect" 	severity error;
			
---------------------------------------------------------------------------------------------------------
-- Testing beq
---------------------------------------------------------------------------------------------------------	

		report "running test on beq";
		instr_op <= "000100";

			wait for 10 ns;
			assert reg_dst = '0' 		report "control_unit_tb: reg_dst incorrect" 	severity error; -- w/ don't ware
			assert alu_src = '0' 		report "control_unit_tb: alu_src incorrect" 	severity error;			
			assert mem_to_reg = '0' 	report "control_unit_tb: mem_to_reg incorrect" 	severity error; -- w/ don't care
			assert reg_write = '0' 		report "control_unit_tb: reg_write incorrect" 	severity error;
			assert mem_read = '0' 		report "control_unit_tb: mem_read incorrect" 	severity error;
			assert mem_write = '0' 		report "control_unit_tb: mem_write incorrect" 	severity error;
			assert branch = '1' 			report "control_unit_tb: branch incorrect" 	severity error;
			assert alu_op = "01"			report "control_unit_tb: alu_op incorrect" 	severity error;
			
      wait;
   end process;

END;
