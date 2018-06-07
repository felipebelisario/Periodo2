#include <stdlib.h>

int main(){

system("gcc -c pilhadin.c");
system("gcc -c usuario.c");
system("gcc -o ex pilhadin.o usuario.o");
return 0;

}