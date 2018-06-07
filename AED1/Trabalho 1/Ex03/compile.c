#include <stdlib.h>

int main(){

system("gcc -c listadin.c");
system("gcc -c usuario.c");
system("gcc -o ex listadin.o usuario.o");
return 0;

}