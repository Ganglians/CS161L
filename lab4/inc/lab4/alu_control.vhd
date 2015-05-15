-- Names: Juan Chavez && Shilpa Chirackel && Michael Villanueva
-- Lab 4
-- alu_control.vhd
-- 5/15/2015

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.cpu_constant_library.all;

entity alu_control is
  port (
    alu_op            : in std_logic_vector(1 downto 0);
    instruction_5_0   : in std_logic_vector(5 downto 0);
    alu_out           : out std_logic_vector(3 downto 0)
    );
end alu_control;

architecture Behavioral of alu_control is

begin
    process (alu_op, instruction_5_0)
    begin
        case alu_op is
		  
            --LW & SW--
            when "00" =>
                alu_out <= "0010";
					 
            --branch equal--
            when "01" =>
                alu_out <= "0010";
					 
            -- r-type -- 
            when "10" =>
				
                case instruction_5_0 is
					 
                    --add
                    when "100000" =>
                        alu_out <= "0010";
								
                    --subtract
                    when "100010" =>
                        alu_out <= "0110";
								
                    --and
                    when "100100" =>
                        alu_out <= "0000";
								
                    --or
                    when "100101" =>
                        alu_out <= "0001";
								
                    --set on less than
                    when "101010" =>
                        alu_out <= "0111";
								
                    --others
                    when others =>
                        alu_out <= "0000";
                end case;
					 
            --others
            when others =>
                alu_out <= "0000";
					 
        end case;
		  
    end process;
	 
end Behavioral; 
