library ieee;
use ieee.std_logic_1164.all;

entity EqA is
  port(
        A: in bit;
        B: in bit;
        C: in bit;
        S: out bit
      );
  end entity Eqa;    library ieee;
use ieee.std_logic_1164.all;  

architecture archEqA of Eqa is
begin
  
  signal i1, i2, i3, i4, i5 :bit;
  i1 <= not(A) and not(B) and no(C);    
  i2 <= not(A) and B and C;
  i3 <= not (A) and B and not(C);
  i4 <= A and B and C;
  i5 <= A and B and not(C);
  S <= i1 or i2 or i3 or i4 or i5;  
    
end architecture archEqA;