:- dynamic produto/2.

inicio:-
    repeat,nl,
    write('1- Adicionar produto'),nl,
    write('2- Achar produtos de mesmo preço'),nl,
    write('3- Remover produto'),nl,
    write('4- Listar todos os produtos e seus preços'),nl,
    write('5- Sair'),nl,nl,
    le_atomo(R),
    (R=5,write('Fim!');
    executa(R),fail).

executa(1):-
    write('Nome do produto: '),
    le_atomo(X),nl,
    write('Preço: '),
    le_atomo(Y),
    append('lista.pl'),
    nl,
    write(produto(X,Y)),
    write('.'),
    told.

executa(2):-
    consult('lista.pl'),
    write('Produtos de qual preço? '),
    le_atomo(X),nl,
    produto(Y,X),
    write(Y),nl.

executa(3):-
    consult('lista.pl'),
    write('Nome do produto: '),
    le_atomo(X),
    retract(produto(X,_)),
    tell('lista.pl'),
    listing(produto/2),
    told.

executa(4):-
    consult('lista.pl'),nl,
    produto(X,Y),
    write(X),write(' : '),
    write(Y), write(' reais.'),nl.

le_atomo(Atomo):-
    le_str(String),
    name(Atomo,String).

le_str(String):-
    get0(Char),
    le_str_aux(Char,String).

le_str_aux(-1,[]):- !.
le_str_aux(10,[]):- !.
le_str_aux(13,[]):- !.
le_str_aux(Char,[Char|Resto]):-
    le_str(Resto).