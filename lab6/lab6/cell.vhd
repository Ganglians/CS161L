library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cam_cell is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           we : in  STD_LOGIC;
           cell_search_bit : in  STD_LOGIC;
           cell_dont_care_bit : in  STD_LOGIC;
   	   cell_match_bit_in : in  STD_LOGIC ;
           cell_match_bit_out : out  STD_LOGIC);
end cam_cell;
------------------------ BCAM -------------------------
architecture bcam of cam_cell is
signal stored_cell : std_logic;
begin

process(clk, rst, we, cell_search_bit, cell_dont_care_bit, cell_match_bit_in)--,cell_match_bit_out)
begin

if (rst = '1') then
	stored_cell <= '0';
	cell_match_bit_out <= '0';
elsif (we = '1') then
	stored_cell <= cell_search_bit;
	cell_match_bit_out <= '0';
elsif (cell_match_bit_in = '0') then
	cell_match_bit_out <= '0';
else
	if (stored_cell = cell_search_bit) then
		cell_match_bit_out <= '1';
	else 
		cell_match_bit_out <= '0';
	end if;
end if;

end process;

end bcam;
------------------------ TCAM -------------------------
architecture tcam of cam_cell is
signal stored_cell : std_logic;

begin

process(clk, rst, we, cell_search_bit, cell_dont_care_bit, cell_match_bit_in)--,cell_match_bit_out)
begin
if (rst = '1') then
	stored_cell <= '0';
	cell_match_bit_out <= '0';
elsif (we = '1') then
	stored_cell <= cell_search_bit;
	cell_match_bit_out <= '0';
elsif (cell_match_bit_in = '0') then
	cell_match_bit_out <= '0';
else
	if (stored_cell = cell_search_bit) then
		cell_match_bit_out <= '1';
	else 
		cell_match_bit_out <= '0';
	end if;
end if;

end process;

end tcam ;
------------------------ STCAM -------------------------
architecture stcam of cam_cell is
signal stored_cell, dont_care_mask : std_logic;
begin


process(clk, rst, we, cell_search_bit, cell_dont_care_bit, cell_match_bit_in)--,cell_match_bit_out)
begin
if (rst = '1') then
	stored_cell <= '0';
	cell_match_bit_out <= '0';
elsif (we = '1') then
	stored_cell <= cell_search_bit;
	cell_match_bit_out <= '0';
	dont_care_mask <= cell_dont_care_bit;
elsif (cell_match_bit_in = '0') then
	cell_match_bit_out <= '0';
elsif (dont_care_mask = '1') then
	cell_match_bit_out <= '1';
else
	if (stored_cell = cell_search_bit) then
		cell_match_bit_out <= '1';
	else 
		cell_match_bit_out <= '0';
	end if;
end if;

end process;

end stcam; 