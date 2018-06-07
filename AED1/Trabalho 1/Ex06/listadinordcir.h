typedef struct no *Lista;

Lista cria_lista();
int lista_vazia(Lista lst);
int print_lista(Lista lst);
int insere_elem(Lista *lst, int elem);
int remove_elem (Lista *lst, int *elem);
int insere_inicio(Lista *lst, int elem);
int insere_posicao(Lista *lst, int elem, int pos);
int tamanho(Lista lst);
int remove_posicao(Lista *lst, int pos, int *elem);
int maior(Lista lst);