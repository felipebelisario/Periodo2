#include <stdlib.h>

int main(){

system("gcc -c pilha.c");
system("gcc -c usuario.c");
system("gcc -o ex pilha.o usuario.o");
return 0;

}