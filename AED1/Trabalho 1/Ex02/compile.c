#include <stdlib.h>

int main(){

system("gcc -c listaord.c");
system("gcc -c usuario.c");
system("gcc -o ord listaord.o usuario.o");
return 0;

}