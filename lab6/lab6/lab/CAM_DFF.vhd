library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity DFF is
    port (
        clk :   in std_logic;
        rst :   in std_logic;
        en  :   in std_logic;
        d   :   in std_logic;
        q   :   out std_logic
    );
end DFF;

architecture behavioral of DFF is
begin
    state_change : process (clk, rst) is
    begin
        if (rst = '1') then
            q   <=  '0' after 2 ns;
        elsif (clk'event and clk = '1' and en = '1') then
            q   <=  d   after 2 ns;
        end if;
    end process state_change;
end architecture behavioral;