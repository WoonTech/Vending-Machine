----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:37:22 01/13/2021 
-- Design Name: 
-- Module Name:    VendingMachine - Behavioral 
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
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

entity VendingMachine is
    Port ( Reset : in  STD_LOGIC;
           Clock : in  STD_LOGIC;
           Ten : in  STD_LOGIC;
           Five : in  STD_LOGIC;
           Chocolate : out  STD_LOGIC);
end VendingMachine;

architecture Behavioral of VendingMachine is
	type StateType is (stZero, stFive, stTen, stFifteen, stTwenty, stTwentyFive, stThirty, stThirtyFive);
	type LightType is (lightGreen, lightRed, lightYellow);
	signal PresentState: StateType;
	signal NextState: StateType;
	signal PresentLight: LightType;
	signal NextLight: LightType;
	signal iReset: STD_LOGIC;
	signal iMoneyReturn, iShiftRegister: std_logic_vector (5 downto 0) ;
	
begin
	process(Clock)
	begin
		if Clock' event and Clock = '1' then
			--when reset is triggered, led light will turn into red color
			--present state go to zero
			--money inserted will be returned
			if Reset = '1' or iReset = '1' then
				PresentState <= stZero;
				PresentLight <= lightRed;
				iMoneyReturn <= iShiftRegister;
				iShiftRegister <= (others=>'0');

			else
			--led light turn into yellow color if the machine is ready to accept coins or further coins need to be inserted
				PresentLight <= lightYellow;
				PresentState <= NextState;
				if nextState = stThirty then
					iShiftRegister <= (others=>'0');
					PresentLight <= lightGreen;
				--this part is use to accumulate the amounnt of coins inserted, incase the machine is reset and the money inserted can be returned.
				elsif Five = '1' then
					iShiftRegister <= iShiftRegister + '1' + '1' + '1' + '1' +'1';
				elsif Ten = '1' then
					iShiftRegister <= iShiftRegister + '1' + '1' + '1' + '1' +'1'+ '1' + '1' + '1' + '1' +'1';
				end if;
			end if;
		end if;
	end process;
	
	--this process is used to create the state machine mentioned in Figure 2 in Word File 
	process(PresentState, Five,Ten)
	begin
		iReset<='0';
		Chocolate <= '0';
		case PresentState is
			when stZero=>
					if Five = '1' then
						NextState <=stFive;
					elsif Ten = '1' then 
						NextState <=stTen;
					else
					NextState <=stZero;
					end if;
			when stFive=>
					if Five = '1' then
						NextState <=stTen;
					elsif Ten = '1' then
						NextState <=stFifteen;
					else
					NextState <=stFive;
					end if;
			when stTen =>
					if Five = '1' then
						NextState <= stFifteen;
					elsif Ten = '1' then
						NextState <= stTwenty;
					else
					NextState <= stTen;
					end if;
			when stFifteen =>
					if Five = '1' then
						NextState <= stTwenty;
					elsif Ten = '1' then
						NextState <= stTwentyFive;
					else
					NextState <= stFifteen;
					end if;
			when stTwenty =>
					if Five = '1' then
						NextState <= stTwentyFive;
					elsif Ten = '1' then
						NextState <= stThirty;
					else
					NextState <= stTwenty;
					end if;
			when stTwentyFive =>
					if Five = '1' then
						NextState <= stThirty;
					--if money excess the maximum amount, state will go to stzero and all the money inserted will be return.
					elsif Ten = '1' then
						NextState <= stZero;
						iReset <= '1';
					else
					NextState <= stTwenty;
					end if;
			--if 30coins is received, chocolate come out and light become green
			when stThirty =>
					Chocolate <= '1';
					NextState<= stZero;
					iReset <= '1';
			when others =>
					NextState<= stZero;
		end case;
		
		if Reset = '1' then
			NextState<= stZero;
		end if;

	end process;
end Behavioral;

