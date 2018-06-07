library ieee;
use ieee.std_logic_1164.all;

entity somador4bits is
  port(
    opa : IN std_logic_vector(3 downto 0);
    opb : IN std_logic_vector(3 downto 0);
    ops : OUT std_logic_vector(3 downto 0);
    opcout : OUT std_logic
    );
  end entity somador4bits;
  
  architecture arch_s4bits of somador4bits is
    
    component meiosomador is 
      port(
        a : IN std_logic;
        b : IN std_logic;
        s : OUT std_logic;
        c : OUT std_logic
        );
      end component;
      
      component somadorcompleto is
        port(
          a : IN std_logic;
          b : IN std_logic;
          cin : IN std_logic;
          s : OUT std_logic;
          cout: OUT std_logic
          );
        end component;
        
        signal c1,c2,c3 : std_logic;
      begin
        b0: meiosomador port map(a => opa(0),b => opb(0),s => ops(0), c => c1);
        b1 : somadorcompleto port map(a => opa(1), b => opb(1), cin => c1, s => ops(1), cout => c2);
        b2 : somadorcompleto port map(a => opa(2), b => opb(2), cin => c2, s => ops(2), cout => c3);
        b3 : somadorcompleto port map(a => opa(3), b => opb(3), cin => c3, s => ops(3), cout => opcout);
      end;