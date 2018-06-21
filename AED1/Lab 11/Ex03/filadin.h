typedef struct fila * Fila;

Fila cria_fila();
int fila_vazia(Fila f);
int insere_fim(Fila *f, int elem);
int remove_ini(Fila *f, int *elem);
int print_fila(Fila f);