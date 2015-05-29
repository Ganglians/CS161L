library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;


entity CAM_Row is

	Generic (CAM_WIDTH : integer := 8);
	
	Port   (clk 			 	: in  STD_LOGIC;
           rst 		 		: in  STD_LOGIC;
           we 			 		: in  STD_LOGIC;
           search_word 		: in  STD_LOGIC_VECTOR (CAM_WIDTH-1 downto 0);
           dont_care_mask 	: in  STD_LOGIC_VECTOR (CAM_WIDTH-1 downto 0);
           row_match 		: out  STD_LOGIC);
			  
end CAM_Row;

architecture Behavioral_row of CAM_Row is


component cam_cell is

Generic (CAM_WIDTH : integer := 8) ;

    Port  (clk 					: in  STD_LOGIC;
           rst 					: in  STD_LOGIC;
           we 						: in  STD_LOGIC;
           cell_search_bit 	: in  STD_LOGIC;
           cell_dont_care_bit : in  STD_LOGIC;
			  cell_match_bit_in 	: in  STD_LOGIC;
           cell_match_bit_out : out  STD_LOGIC);
			  
end component;

for all : cam_cell use entity work.cam_cell(bcam); 

signal cell_match : std_logic_vector(CAM_WIDTH-1 downto 0);

begin

-- Connect the CAM cells here

GEN_REG: 

for i in CAM_WIDTH-1 to 0 generate

	  cam_row : cam_cell generic map
	  (
			CAM_WIDTH => CAM_WIDTH
	  )
	  
     port map
	  (
		 clk 						=> clk,
	    rst 						=> rst,
		 we 						=> we,
		 cell_search_bit 		=> search_word(i), -- ?????
		 cell_dont_care_bit 	=> dont_care_mask(i),
		 cell_match_bit_in 	=> cell_match(i),
		 cell_match_bit_out 	=> cell_match(i-1)
	  );
	  
end generate GEN_REG;

	row_match <= cell_match(0);

end Behavioral_row;