typedef struct no *Lista;

Lista cria_lista();
int lista_vazia(Lista lst);
void print_lista(Lista lst);
int insere_elem(Lista *lst, int elem);
int remove_elem (Lista *lst, int elem);
int remove_todos (Lista *lst, int elem);
int insere_final(Lista *lst, int elem);
int remove_pares(Lista *lst);
int maior(Lista lst);
int tamanho(Lista lst);
Lista concatena(Lista lst, Lista lst2);