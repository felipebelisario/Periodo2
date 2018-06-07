typedef struct lista *Lista;

Lista cria_lista();
int lista_vazia(Lista lst);
int lista_cheia(Lista lst);
int insere_elem(Lista lst, int elem);
int remove_elem(Lista lst, int elem);
int remove_todos(Lista lst, int elem);
void print_lista(Lista lst);
Lista remove_impares(Lista lst);
int menor(Lista lst);
int tamanho(Lista lst);
Lista concatena(Lista lst, Lista lst2);