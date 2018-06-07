library ieee;
use ieee.std_logic_1164.all;

entity somadorcompleto is
  port(
    a : IN std_logic;
    b : in std_logic;
    cin : IN std_logic;
    s : OUT std_logic;
    cout : OUT std_logic
    );
  end entity somadorcompleto;
  
  architecture arch_sc of somadorcompleto is
  begin
    s <= a XOR b XOR cin;
    cout<= (a AND cin) OR (b AND cin) OR (a AND b);
  end;

