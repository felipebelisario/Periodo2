#include <stdlib.h>

int main(){

system("gcc -c pilha_bin.c");
system("gcc -c usuario.c");
system("gcc -o ex pilha_bin.o usuario.o");
return 0;

}