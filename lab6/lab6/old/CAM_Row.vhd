library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;


entity CAM_Row is
	Generic (CAM_WIDTH : integer := 8) ;
	Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           we : in  STD_LOGIC;
           search_word : in  STD_LOGIC_VECTOR (CAM_WIDTH-1 downto 0);
           dont_care_mask : in  STD_LOGIC_VECTOR (CAM_WIDTH-1 downto 0);
           row_match : out  STD_LOGIC);
end CAM_Row;

architecture Behavioral of CAM_Row is


component cam_cell is
Generic (CAM_WIDTH : integer := 8) ;
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           we : in  STD_LOGIC;
           cell_search_bit : in  STD_LOGIC;
           cell_dont_care_bit : in  STD_LOGIC;
			cell_match_bit_in : in  STD_LOGIC ;
           cell_match_bit_out : out  STD_LOGIC);
end component ;

signal match : std_logic_vector(CAM_WIDTH-1 downto 0);
begin

-- Connect the CAM cells here

GEN_REG: 
for i in CAM_WIDTH to 0 generate
	  cam_row : cam_cell generic map
	  (
	  CAM_WIDTH => CAM_WIDTH
	  )
     port map
	  ( clk => clk,
	    rst => rst,
		 we => we,
		 cell_search_bit => search_word, -- confused about what to map these to. We think we need to loop through each bit of the search word
		 cell_dont_care_bit => dont_care_mask,
		 cell_match_bit_in => cell_search_bit, 
		 cell_match_bit_out => row_match	
	  );
end generate GEN_REG;

end Behavioral;
