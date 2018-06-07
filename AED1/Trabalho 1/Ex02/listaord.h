typedef struct lista *Lista;

Lista cria_lista();
int lista_vazia(Lista lst);
int lista_cheia(Lista lst);
int insere_ord(Lista lst, int elem);
int remove_ord(Lista lst, int elem);
void print_lista(Lista lst);
Lista remove_pares(Lista lst);
Lista intercala(Lista lst, Lista lst2);
int maior(Lista lst);
int tamanho(Lista lst);
int iguais(Lista lst, Lista lst2);