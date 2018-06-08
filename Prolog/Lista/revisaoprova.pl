gera(concatenada_com([],L),L).
:-op(80,xfx,gera).
:-op(50,xfx,concatenada_com).

existe_em(X,[Y|Z]):-
    X = Y,!.

existe_em(X,[Y|Z]):-
    not(X = Y),
    existe_em(X,Z).

:-op(50,xfx,existe_em).

deleta(X,[X|Y],Y).
deleta(X,[Z|Y],[Z|W]):-
    not(X = Z),
    deleta(X,Y,W).

resulta_em(deletado_de([],L),L).
:-op(50,xfx,deletado_de).
:-op(80,xfx,resulta_em).

substitui(X,Y,[Y|Z],[X|Z]).
substitui(X,Y,[W|Z],R):-
    not(Y = W),
    substitui(X,Y,Z,R1),
    R = [W|R1].

insere_n(1,X,L,[X|L]).
insere_n(A,X,[W|Y],R):-
    A>1,
    N1 is A-1,
    insere_n(N1,X,Y,R1),
    R = [W|R1].    

duplica_um(X,[W|Y],R):-
    C is 2*X,
    substitui(C,X,[W|Z],R).

duplica([],[]).
duplica([X|Y],R):-
    duplica(Y,R1),
    X1 is 2*X,
    R = [X1|R1].
