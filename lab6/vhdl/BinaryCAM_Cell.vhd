library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;


entity BCAM_Cell is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           we : in  STD_LOGIC;
           cell_search_bit : in  STD_LOGIC;
           cell_dont_care_bit : in  STD_LOGIC;
   	   cell_match_bit_in : in  STD_LOGIC ;
           cell_match_bit_out : out  STD_LOGIC);
end BCAM_Cell;

architecture Behavioral of BCAM_Cell is

begin



end Behavioral ;
