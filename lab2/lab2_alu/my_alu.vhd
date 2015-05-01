--------------------------------------------------------------------------------------
-- Company: UCR
-- Engineer: Michael Villanueva && Shilpa Chirackel && Juan Chavez
-- 
-- Create Date:    14:58:31 04/16/2015 
-- Design Name: 	 ALU
-- Module Name:    my_alu - Behavioral 
-- Project Name:   Lab2
-- Target Devices: VHDL
-- Tool versions: 
-- Description: Augment lab1 to handle bcd (binary coded decimal
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
--------------------------------------------------------------------------------------
library IEEE;

use IEEE.NUMERIC_STD.ALL;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

use ieee.numeric_std.all;
use ieee.std_logic_arith.conv_std_logic_vector;

entity my_alu is

	generic(NUMBITS: natural:=32); --specifies the operation's width
								   --<Lab2>: change to 32 bits
								   --<lab2>: (eight digits in bcd)
	
    Port ( 
				--size is NUMBITS-1, the last bit found in NUMBITS is reserved for the carryout
				
				A 			: in   STD_LOGIC_VECTOR(NUMBITS-1 downto 0);
				B 			: in   STD_LOGIC_VECTOR(NUMBITS-1 downto 0);
				opcode   : in   STD_LOGIC_VECTOR(3 downto 0); --<Lab2>: opcode now 4 bits
				result   : out  STD_LOGIC_VECTOR(NUMBITS+3 downto 0); --<Lab2>: result 4 bits longer than inputs A&B
				carryout : out  STD_LOGIC; --Only matters with unsigned
				overflow : out  STD_LOGIC; --Only matters with singed
				zero 		: out  STD_LOGIC	
				
		 );
			  		  
    -- --------------------------------------------------------------------------------
    -- --------------------------------------------------------------------------------
    --<Lab2>: function decoder for binary decimal
    -- --------------------------------------------------------------------------------
    -- --------------------------------------------------------------------------------					  


	function bcd_decode (bcd_input : std_logic_vector(NUMBITS-1 downto 0);
								decode_opcode : std_logic_vector)
	return integer is --<Lab2>: function's return value
	
		--<Lab2>: define variabvles
		variable current_place : integer := 0; --<Lab2>: goes by fours (for every nibble)
		variable exponent : integer := 0; --<Lab2>: increases by one each time
		variable nibble : std_logic_vector(3 downto 0); --<Lab2>: stores nibble
		variable decimal_form : integer := 0; --<Lab2>: converted decimal form

	begin

		--<Lab2>: signed operations 
		--<Lab2>: one digit (a.k.a one nibble) shorter
		if(decode_opcode = "1100" or decode_opcode = "1101") then
			
			if(bcd_input(NUMBITS-1 downto NUMBITS-4) = "0001") then --<Lab2>: case: negative number
			
				for i in 1 to (NUMBITS/4 - 1) loop
					nibble := bcd_input(current_place+3 downto current_place); --<Lab2>: current nibble being worked on
					decimal_form := decimal_form - (to_integer(unsigned(nibble)) * (10 ** exponent)); --<Lab2>: conversion by decimal place
					
					current_place := current_place + 4;	--<Lab2>: go to the next nibble 			
					exponent := exponent + 1; --<Lab2>: increase the decimal power by one
				end loop;
		
			else
			
				for j in 1 to (NUMBITS/4 -1) loop
					nibble := bcd_input(current_place+3 downto current_place); --<Lab2>: current nibble being worked on
					decimal_form := decimal_form + (to_integer(unsigned(nibble)) * (10 ** exponent)); --<Lab2>: conversion by decimal place
					
					current_place := current_place + 4;	--<Lab2>: go to the next nibble 			
					exponent := exponent + 1; --<Lab2>: increase the decimal power by one
				end loop;
				
			end if;
			
		--<Lab2>: unsigned operations	
		--<Lab2>: use all digits (i.e. all nibbles)
		else

			for k in 1 to (NUMBITS/4) loop
			
				nibble := bcd_input(current_place+3 downto current_place); --<Lab2>: current nibble being worked on
				decimal_form := decimal_form + (to_integer(unsigned(nibble)) * (10 ** exponent)); --<Lab2>: conversion by decimal place
				
				current_place := current_place + 4;	--<Lab2>: go to the next nibble 			
				exponent := exponent + 1; --<Lab2>: increase the decimal power by one
				
			end loop;		
			
		end if;
		
		return decimal_form; --<Lab2>: fixed that decoder did not always return a value (forgot to return final decoded soln)
		
	end bcd_decode;
	
    -- --------------------------------------------------------------------------------
    -- --------------------------------------------------------------------------------
    --<Lab2>: function encoder for binary decimal
    -- --------------------------------------------------------------------------------
    -- --------------------------------------------------------------------------------		
    			  
	function bcd_encode (result : integer; 
						      encode_opcode : std_logic_vector)
	return std_logic_vector is
	--<Lab2>: define variables

	--<Lab2>: creat variables to store each digit prior to conversion
	variable digit_1 : integer := 0; 
	variable digit_2 : integer := 0; 
	variable digit_3 : integer := 0; 
	variable digit_4 : integer := 0; 
	variable digit_5 : integer := 0;
	variable digit_6 : integer := 0; 
	variable digit_7 : integer := 0; 
	variable digit_8 : integer := 0; 
	variable digit_9 : integer := 0; 
	
	--<Lab2>: variables for positive or negative values and to store results respectively
	
	variable neg : std_logic_vector(3 downto 0) := "0000";
	variable result_negative : std_logic_vector(NUMBITS+3 downto 0);
	
	variable pos : std_logic_vector(3 downto 0) := "0001";
	variable result_positive : std_logic_vector(NUMBITS+3 downto 0);	
	
	begin

		--<Lab2>: separate the decimal's digits and store them in variables
		digit_1 := abs((result/(10 ** 0))) mod 10; 
		digit_2 := abs((result/(10 ** 1))) mod 10;
		digit_3 := abs((result/(10 ** 2))) mod 10;
		digit_4 := abs((result/(10 ** 3))) mod 10;
		digit_5 := abs((result/(10 ** 4))) mod 10;
		digit_6 := abs((result/(10 ** 5))) mod 10;
		digit_7 := abs((result/(10 ** 6))) mod 10;
		digit_8 := abs((result/(10 ** 7))) mod 10;
		
		--<Lab2>: case when the result is signed
		if(encode_opcode = "1100" or encode_opcode = "1101") then
			if(result < 0) then --<Lab2>: when the signed result is negative
			
				result_negative := neg & conv_std_logic_vector((digit_8), 4)
									   & conv_std_logic_vector((digit_7), 4)
									   & conv_std_logic_vector((digit_6), 4)
									   & conv_std_logic_vector((digit_5), 4)
									   & conv_std_logic_vector((digit_4), 4)
									   & conv_std_logic_vector((digit_3), 4)
									   & conv_std_logic_vector((digit_2), 4)
									   & conv_std_logic_vector((digit_1), 4);
				return result_negative;
			
			else --<Lab2>: when the signed result is positive
			
				result_positive := pos & conv_std_logic_vector((digit_8), 4)
									   & conv_std_logic_vector((digit_7), 4)
									   & conv_std_logic_vector((digit_6), 4)
									   & conv_std_logic_vector((digit_5), 4)
									   & conv_std_logic_vector((digit_4), 4)
									   & conv_std_logic_vector((digit_3), 4)
									   & conv_std_logic_vector((digit_2), 4)
									   & conv_std_logic_vector((digit_1), 4);
								   
			return result_positive;	
			
			end if;	
		
		else --<Lab2>: when the result is unsigned
		
			result_positive := conv_std_logic_vector((digit_8), 4)
							   & conv_std_logic_vector((digit_7), 4)
							   & conv_std_logic_vector((digit_6), 4)
							   & conv_std_logic_vector((digit_5), 4)
							   & conv_std_logic_vector((digit_4), 4)
							   & conv_std_logic_vector((digit_3), 4)
							   & conv_std_logic_vector((digit_2), 4)
							   & conv_std_logic_vector((digit_1), 4);	
			return result_positive;
			
		end if;
		
	end bcd_encode;
	
end my_alu;

architecture behavioral of my_alu is
	-- Store intermediate value
	signal tmp: std_logic_vector(NUMBITS+3 downto 0); --<Lab2>: because result is 4 bits longer (?)
	
begin

	process(opcode, tmp, A, B)
				-- Variable declaration
				variable bcd : integer := 0;
				
		begin
				
			--Convert A and B from BCD to Decimal			
			
			case opcode is
				-- <Lab2>:
				-- Convert A and B from BCD inputs to decimal (?)
				
				-- Unsigned add_____________________________________________________________________________________________________
				
				when "1000" =>
					
					
					-- tmp <= std_logic_vector(('0' & A) + ('0' & B));
					
					
					-- reslt <= tmp(NUMBITS-1 downto 0);
					
					-- Only carryout matters for unsigned, overflow should be turned off
					-- carryout <= tmp(NUMBITS);
					-- overflow <= tmp(NUMBITS);
					
					-- Set the zero flag accordingly
					-- if(tmp(NUMBITS-1 downto 0)(NUMBITS-1 downto 0) = 0) then
					--	zero <= '1';
					-- else
					--	zero <= '0';
					-- end if;	
					
				-- Signed add_______________________________________________________________________________________________________
				
				when "1100" =>
				
					-- tmp <= std_logic_vector(signed(A(NUMBITS - 1)&A) 
					-- + signed(B(NUMBITS - 1)&B));
					
					result <= tmp(NUMBITS+3 downto 0); --<Lab2>: because result is 4 bits longer (?)
					
					-- The cases in which the overflow flag will be set for signed add
               if((signed(A) >= 0 and signed(B) >= 0) and (signed(tmp(NUMBITS-1 downto 0)) < 0)) or
               ((signed(A) < 0 and signed(B) < 0) and (signed(tmp(NUMBITS-1 downto 0)) >= 0))
               then overflow <= '1';
               else overflow <= '0';
               end if;
					
					carryout <= tmp(NUMBITS);
					
					-- Set the zero flag accordingly
					if(tmp(NUMBITS-1 downto 0)(NUMBITS-1 downto 0) = 0) then
						zero <= '1';
					else
						zero <= '0';
					end if;
					
				-- Unsigned sub_____________________________________________________________________________________________________
				
				when "1001" =>
				
					-- tmp <= std_logic_vector(('0' & A) - ('0' & B));
					
					result <= tmp(NUMBITS+3 downto 0); --<Lab2>: because result is 4 bits longer (?)
					
					carryout <= not tmp(NUMBITS);
					overflow <= tmp(NUMBITS);
					
					if(tmp(NUMBITS-1 downto 0) = 0) then
						zero <= '1';
					else
						zero <= '0';
					end if;	
					
				-- Signed sub_______________________________________________________________________________________________________
				
				when "1101" =>
				
					-- tmp <= std_logic_vector(signed(A(NUMBITS - 1)&A) 
					-- - signed(B(NUMBITS - 1)&B));
					
					result <= tmp(NUMBITS+3 downto 0); --<Lab2>: because result is 4 bits longer (?)
					
					if ((signed(A) >= 0 and signed(B) < 0) and (signed(tmp(NUMBITS-1 downto 0)) < 0)) or
               ((signed(A) < 0 and signed(B) >= 0) and (signed(tmp(NUMBITS-1 downto 0)) >= 0))
               then overflow <= '1';
               else overflow <= '0';
					end if;
					
					carryout <= tmp(NUMBITS);
					
					if(tmp(NUMBITS-1 downto 0)(NUMBITS-1 downto 0) = 0) then
						zero <= '1';
					else
						zero <= '0';
					end if;
				
				
				
				when others =>
				
					result <= tmp(NUMBITS+3 downto 0); --<Lab2>: because result is 4 bits longer (?)
				
			end case;
			
	end process;
	
end behavioral;
