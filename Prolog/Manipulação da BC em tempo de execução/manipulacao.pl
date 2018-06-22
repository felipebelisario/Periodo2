:- dynamic pai/2.

pai(pedro, maria).
pai(pedro, ana).
pai(pedro, joaquim).

inicio:-
    repeat,
    write('1 - Listar relacionamentos pai'),nl,
    write('2- Adicionar um relacionamento pai'),nl,
    write('3- Remove um relacionamento pai'),nl,
    write('4 - Fim'),nl,
    write('Opção: '),nl
    read(R),
    (R = 4,nl,write('FIM');
    executa(R),fail).

executa(1):-
    listing(pai/2).

executa(2):-
    read(X),
    read(Y),
    assertz(pai(X,Y)),
    nl.