:-dynamic(pai/2).

pai(pedro, maria).
pai(pedro, ana).
pai(pedro, joaquim).

inicio:-
    repeat,nl,
    write('1 - Listar relacionamentos pai'),nl,
    write('2- Adicionar um relacionamento pai'),nl,
    write('3- Remove um relacionamento pai'),nl,
    write('4 - Fim'),nl,nl,
    write('Opção: '),
    read(R),nl,nl,
    (R = 4,nl,write('FIM');
    executa(R),fail).

executa(1):-
    listing(pai/2).

executa(2):-
    write('Nome do pai: '),
    read(X),
    write('Nome do filho: '),
    read(Y),nl,nl,
    assertz(pai(X,Y)),
    tell('dados.pl'),
    listing(pai/2),
    told.

executa(3):-
    nl,write('Digite o nome do pai: '),
    read(X),nl,
    write('Digite o nome do filho: '),
    read(Y),nl,nl,
    retract(pai(X,Y)),
    tell('dados.pl'),
    listing(pai/2),
    told.