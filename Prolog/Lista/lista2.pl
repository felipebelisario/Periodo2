% X=posiçao
% Y=primeiro elem
% Z=razão
pac(0,_,_,0).
pac(1,Y,_,Y).
pac(X,Y,Z,R):-
X>1,
Y1 is Y+Z,
X1 is X-1,
pac(X1,Y1,Z,R),!.

pasc(0,_,_,0).
pasc(1,Y,_,Y).
pasc(X,Y,Z,R):-
	X1 is X-1,
	pasc(X1,Y,Z,R1),
	R is Z+R1,!.

somapac(0,_,_,0).
somapac(1,Y,_,Y).
somapac(X,Y,Z,R1):-
pac(Z,X,Y,R),
R1 is ((X+R)*Z)/2.

somapasc(1,Y,_,Y,Y).
somapasc(X,Y,Z,W,R):-
X>1,
X1 is X-1,
somapasc(X1,Y,Z,W1,R1),
W is W1+Z,
R is R1+Z.

% Questão 3:
%
%	1- X = a.
%	2- X = [].
%	3- false.
%	4- X = [a].
%	5- false.
%	6- X=a, Y = b.
%	7- false.
%	8- X=a, Y = b, Z = c.
%	9- false.
%	10- X = a, Y = b.
%	11- X =a, Y = [].
%	12- false.
%	13- X = a, Y = [b, c].
%	14- X = a, Y = b, Z = [c].
%	15- X = a, Y = b, Z = [].
%	16- false.
%	17-X = a, Y = b, Z = [c, d].
%	18-X = a, Y = b, Z = [a].
%	19-X = Z, Z = [a], Y = b.


n_esimo(1,X,[X|_]).
n_esimo(N,X,[_|L]):-
N>1,
N1 is N-1,
n_esimo(N1,X,L).

no_elementos([],0).
no_elementos([_|Y],R):-
no_elementos(Y,R1),
R is R1+1.


tira_elemento(X,[X|Y],Y).
tira_elemento(X,[Y|Z],[Y|W]):-
X\=Y,
tira_elemento(X,Z,W).

retirar_ocor(_,[],[]).
retirar_ocor(X,[X|Y],R):-
retirar_ocor(X,Y,R).
retirar_ocor(X,[Y|Z],R):-
X\=Y,
retirar_ocor(X,Z,R1),
R = [Y|R1].

insere(R,X,[X|R]).

retire_repet([],[]).
retire_repet([X|Y],R):-
retire_repet(Y,R2),
retirar_ocor(X,R2,R1),
R = [X|R1].

concatenar([],X,X).
concatenar([X|Y],L,[X|R]):-
concatenar(Y,L,R).

maior([X],X).
maior([X|[Y|Z]],L):-
(X>Y),
maior([X|Z],L).
maior([X|[Y|Z]],L):-
(Y>=X),
maior([Y|Z],L).

menor([X],X).
menor([X|[Y|Z]],L):-
(X<Y),
menor([X|Z],L).
menor([X|[Y|Z]],L):-
(X>=Y),
menor([Y|Z],L).

pegar([],_,[]).
pegar([X|Y],[Z|W],R):-
pegar(Y,[Z|W],R1),
n_esimo(X,[Z|W],X1),
insere(R1,X1,R).

inserir_cabeca(X,R,[X|R]).

inseren(X,1,A,[A|X]).
inseren([X|Y],N,A,R):-
N1 is N-1,
inseren(Y,N1,A,R1),
insere(R1,X,R).

inverte([],[]).
inverte([X|Y],R):-
inverte(Y,R1),
R = [R1|X].

substitui(X,Y,[Y|W],[X|W]).
substitui(X,Y,[W|Z],R):-
substitui(X,Y,Z,R1),
insere(R1,W,R).

duplica([],[]).
duplica([X|Y],R):-
	duplica(Y,Y1),
	X1 is X*2,
R = [X1|Y1].

duplica_um(X,[Y|Z],R):-
B is 2*X,
substitui(B,X,[Y|Z],R).

nao_vazia([X|Y],[Z|W]):-
not(disjuntos([X|Y],[Z|W])).

uniao_completo(A,B,R):-
uniao(A,B,R1),
retire_repet(R1,R).

uniao([],L,L).
uniao([X|Y],L,R):-
not(pertence(L,X)),
uniao(Y,[X|L],R).

uniao([X|Y],L,R):-
pertence(L,X),
uniao(Y,L,R).

disjuntos(_,[]).
disjuntos([],_).
disjuntos([X|Y],[Z|W]):-
disjuntos(Y,[Z|W]),
not(pertence([Z|W],X)).

pertence([X|_],Z):-
Z=X,!.

pertence([_|Y],Z):-
pertence(Y,Z).

igual([A],[A]):-
!.

igual([X|Y],[X|Z]):-
igual(Y,Z).


