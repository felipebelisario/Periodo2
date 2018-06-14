% "Template':
%    see('dados.pl'),
%    processa_arquivo,
%    seen.

% processa_arquivo:-
%    read(Termo),
%   processa_termo(Termo).
%
% processa_termo(end_of_file):- !.
%
% processa_termo(T):-
%    processa(T),
%    processa_arquivo.

% Escrita:
% tell/1
% told

copia(A1,A2):-
    see(A1),
    tell(A2),
    processa_arquivo,
    seen,
    told.

processa_arquivo:-
    read(X),
    processa_termo(X).

processa_termo(end_of_file):- !.
processa_termo(X):-
    write(X),
    processa_arquivo.
