library ieee;
use ieee.std_logic_1164.all;

entity roteiro8v2 is
port(
   SW   : IN std_logic_vector(6 downto 0);
	HEX0 : OUT std_logic_vector(6 downto 0)
);

end entity roteiro8v2;

architecture arch of roteiro8v2 is
begin

--  HEX0(0) <= sw(0);
--  HEX0(1) <= sw(1);
--  HEX0(2) <= sw(2);
--  HEX0(3) <= sw(3);
--  HEX0(4) <= sw(4);
--  HEX0(5) <= sw(5);
--  HEX0(6) <= sw(6);
  --       gfedcba
  HEX0 <= "1000000" when SW = "0000000" else
          "1111001" when SW = "0000001" else
			 "0100100" when SW = "0000010" else
			 "0110000" when SW = "0000011" else
			 "0011001" when SW = "0000100" else
			 "0010010" when SW = "0000101" else
			 "0000010" when SW = "0000110" else
			 "1111000" when SW = "0000111" else
			 "0000000" when SW = "0001000" else
			 "0010000" when SW = "0001001" else
			 "1111111";
  
  end;