#include <stdlib.h>

int main(){

system("gcc -c filadin.c");
system("gcc -c usuario.c");
system("gcc -o ex filadin.o usuario.o");
return 0;

}