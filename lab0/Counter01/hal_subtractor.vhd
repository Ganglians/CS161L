----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:58:04 04/16/2015 
-- Design Name: 
-- Module Name:    hal_subtractor - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE; use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity hal_subtractor is
    Port ( X : in  STD_LOGIC;
           Y : in  STD_LOGIC;
           D : out  STD_LOGIC;
           B : out  STD_LOGIC);
end hal_subtractor;

architecture Behavioral of hal_subtractor is

begin
	D <= X XOR Y; B <= NOT(X) AND Y;

end Behavioral;

