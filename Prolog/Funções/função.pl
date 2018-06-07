função(X,0):-
    X<0,!.

função(X,2):-
    X<4,!.

função(X,4).

tira(_,[],[]).
tira(X,[X|Y],Y).
tira(X,[Y|Z],[Y|R]):-
    not(X = Y),
    tira(X,Z,R),!.

maior(X,Y,X):-
    X>=Y,!.
maior(X,Y,Y):-
    Y>=X,!.
    
