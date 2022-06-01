--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:21:40 01/13/2021
-- Design Name:   
-- Module Name:   D:/Project/Year 4 Project/HDL/Exam/VendingMachine/tb_VendingMachine.vhd
-- Project Name:  VendingMachine
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: VendingMachine
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY tb_VendingMachine IS
END tb_VendingMachine;
 
ARCHITECTURE behavior OF tb_VendingMachine IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT VendingMachine
    PORT(
         Reset : IN  std_logic;
         Clock : IN  std_logic;
         Ten : IN  std_logic;
         Five : IN  std_logic;
         Chocolate : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal tb_Reset : std_logic := '1';
   signal tb_Clock : std_logic := '0';
   signal tb_Ten : std_logic := '0';
   signal tb_Five : std_logic := '0';

 	--Outputs
   signal tb_Chocolate : std_logic;

   -- Clock period definitions
   constant tb_Clock_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: VendingMachine PORT MAP (
          Reset => tb_Reset,
          Clock => tb_Clock,
          Ten => tb_Ten,
          Five => tb_Five,
          Chocolate => tb_Chocolate
        );

   -- Clock process definitions
   Clock :process
   begin
		tb_Clock <= '1';
		wait for tb_Clock_period/2;
		tb_Clock <= '0';
		wait for tb_Clock_period/2;
   end process;
 
	Reset: process
	begin
		tb_Reset <= '1';
		wait for 2*tb_Clock_period;
		tb_Reset <= '0';
		wait for 5*tb_Clock_period;
		tb_Reset <= '1';
		wait for tb_Clock_period;
		tb_Reset <= '0';
		wait;
	end process; 

   -- Stimulus process
   process
   begin		
      -- hold reset state for 100 ns.
		--this process simulate the case: when money insert but the reset signal is asserted suddenly
		wait for 5*tb_Clock_period;	
      tb_Ten <= '1';
		wait for tb_Clock_period;	
		tb_Five <= '1';
		tb_Ten <= '0';
		wait for tb_Clock_period;	
		tb_Five <= '0';
		tb_Ten <= '1';
		wait for tb_Clock_period;
		tb_Ten <= '0';
		
		--this process simulate the case: when 30 coins inserted and the chocolate come out
		wait for 5*tb_Clock_period;	
		tb_Five <= '1';
		wait for tb_Clock_period;	
		tb_Five <= '0';
		tb_Ten <= '1';
		wait for 2*tb_Clock_period;
		tb_Five <= '1';
		tb_Ten <= '0';
		wait for tb_Clock_period;
		tb_Five <= '0';
		
		--this process simulate the case: when coins inserted excess 35, then the vending machine will be reset and the coins inserted will be returned
		wait for 5*tb_Clock_period;	
      tb_Ten <= '1';
		wait for tb_Clock_period;	
		tb_Five <= '1';
		tb_Ten <= '0';
		wait for tb_Clock_period;	
		tb_Five <= '0';
		tb_Ten <= '1';
		wait for 2*tb_Clock_period;
		tb_Ten <= '0';
      -- insert stimulus here 
		--running half, reset signal come in
		
		--5+5+5+5+5+5
		wait for 5*tb_Clock_period;	
      tb_Five <= '1';
		wait for 6*tb_Clock_period;	
		tb_Five <= '0';
		
		--10+10+10
		wait for 5*tb_Clock_period;	
      tb_Ten <= '1';
		wait for 3*tb_Clock_period;	
		tb_Ten <= '0';
      wait;
   end process;

END;
