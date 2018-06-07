library ieee;
use ieee.std_logic_1164.all;

entity EqC is
  port(
    A: in bit;
    B: in bit;
    C: in bit;
    D: in bit;
    S: out bit
);
 end entity EqC;    
architecture ArchEqC of EqC is
begin
  
  signal i1, i2, i3: bit;
  i1 <= not(A) and not(B) and not(C) and not(D);
  i2 <= not(A) and not(B) and not(C) and D;
  i3 <= not(A) and B and not(C) and D;
  S <= i1 or i2 or i3;  
  
end architecture ArchEqC;
