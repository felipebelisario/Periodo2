cabeca([X|Y],X).
cauda([X|Y],Y).

n_de_elementos([],0).
n_de_elementos([X|Y],R):-

     n_de_elementos(Y,R1),
     R is R1+1.

soma([X],X).
soma([X|Y],R):-
   soma(Y,R1),
   R is R1+X.

prod([X],X).
prod([X|Y],R):-
   prod(Y,R1),
   R is R1*X.

duplica([],[]).   
duplica([X|Y],R):-
    duplica(Y,Y1),
    X1 is 2*X,
    R = [X1|Y1].

ultimo([X],X).
ultimo([X|Y],R):-
    ultimo(Y,R).

concatena([],[X|Y],[X|Y]).
concatena([X|Y],[W|Z],R):-
    concatena(Y,[W|Z],R1),
    R = [X|R1].

remove_primeira_ocorr(E,[],[]).
remove_primeira_ocorr(E,[X|Y],[X|R1]):-
    not(X = E),
    remove_primeira_ocorr(E,Y,R1).

remove_primeira_ocorr(E,[X|Y],Y):-
    E = X.    
    
remove_todos_ocorr(El,[],[]).
remove_todos_ocorr(El,[X|Y],[X|R1]):-
    not(X = El),
    remove_todos_ocorr(El,Y,R1).

remove_todos_ocorr(El,[X|Y],R1):-
    El = X,
    remove_todos_ocorr(El,Y,R1).

concatena2([],L,L).
concatena2([X1|Y1],L,[X1|R]):-
    concatena2(Y1,L,R).

insere(X,[],[X]).
insere(X,[W|Y],[X|[W|Y]]):-
    X=<W.
insere(X,[W|Y],R):-
    X>W,
    insere(X,Y,R1),
    R = [W|R1].

ordenada([],[]).
ordenada([X|Y],L):-
    ordenada(Y,L1),
    insere(X,L1,L).

pertence(X,[X|Y]).
pertence(X,[Y|W]):-
    not(X = Y),
    pertence(X,W).

fatorial(0,1).
fatorial(N,R):-
    N1 is N-1,
    fatorial(N1,R1),
    R is N*R1.

pot2(0,1).
pot2(N,R) :-
    N>0, N1 is N-1,
    pot2(N1,R1),
    R is 2*R1.

pot3(0,1).
pot3(N,R) :-
    N>0, N1 is N-1,
    pot3(N1,R1),
    R is 3*R1.

mul(_,0,0).
mul(M,N,R) :-
    N>0, N1 is N-1, mul(M,N1,R1), R is M+R1.
mul(M,N,R) :-
    N1 is (-1)*N, mul(M,N1,R1), R is (-1)*R1.

par(0).
par(N) :-
    N>0, N1 is N-1, impar(N1).
par(N) :-
    N1 is (-1)*N, par(N1).
impar (1).
impar(N) :-
    N>0, N1 is N-1, par(N1).
impar(N) :-
    N1 is (-1)*N, impar(N1).

potencia2(0,Y,Y).
potencia2(N,Y,R) :-
    N>0, N1 is N-1,Y1 is 2*Y,
    potencia2(N1,Y1,R).

fatorial(_,R,R).
fatorial(N,Y,R):-
    N>0,N1 is N-1,Y1 is N*Y,
    fatorial(N1,Y1,R).
fatorial(N,R):-
    fatorial(N,1,R).

adiciona(X,L,[X|L]).

n_esimo(1, [X|_], X):- !.
n_esimo(Z,[_|Y],R):-
    T is Z-1,
    n_esimo(T,Y,R).
      

media([X],X).
media([X|Y],R):-
    soma([X|Y],R1),
    n_de_elementos([X|Y],R2),
    R is R1/R2,!.

