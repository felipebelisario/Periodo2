
library ieee;
use ieee.std_logic_1164.all;


entity roteiro8 is
	port(
		SW		: IN	std_logic_vector(3 downto 0);
		HEX0	: OUT	std_logic_vector(6 downto 0)
	);
end entity roteiro8;



architecture arch of roteiro8 is
begin
--	HEX0(0) <= SW(0);
--	HEX0(1) <= SW(1);
--	HEX0(2) <= SW(2);
--	HEX0(3) <= SW(3);
--	HEX0(4) <= SW(4);
--	HEX0(5) <= SW(5);
--	HEX0(6) <= SW(6);
--           gfedcba
	HEX0 <=	"1000000" when SW = "0000" else
				"1111001" when SW = "0001" else
				"0100100" when SW = "0010" else
				"0110000" when SW = "0011" else
				"1111111"; 

end;
