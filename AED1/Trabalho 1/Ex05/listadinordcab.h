typedef struct no *Lista;

Lista cria_lista();
int lista_vazia(Lista lst);
void print_lista(Lista lst);
int insere_ord(Lista *lst, int elem);
int remove_ord (Lista *lst, int elem);
Lista intercala_ord(Lista lst1, Lista lst2);
int menor(Lista lst);
int tamanho(Lista lst);
int iguais(Lista lst, Lista lst2);
int remove_impares(Lista *lst);