typedef struct pilha * Pilha;

Pilha cria_pilha();
int pilha_vazia(Pilha p);
int push(Pilha *p, char elem);
int pop(Pilha *p);
int le_topo(Pilha *p, int *elem);
int print_pilha(Pilha p);
int validade(char *s);