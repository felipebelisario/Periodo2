typedef struct no *Lista;

Lista cria_lista();
int lista_vazia(Lista lst);
int print_lista(Lista lst);
int insere_elem(Lista *lst, int elem);
int remove_elem (Lista *lst, int elem);
int remove_todos (Lista *lst, int elem);
int tamanho(Lista lst);
int remove_maior(Lista *lst,int *elem);
Lista multiplos_3(Lista lst);