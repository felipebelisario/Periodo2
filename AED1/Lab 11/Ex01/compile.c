#include <stdlib.h>

int main(){

system("gcc -c filaest.c");
system("gcc -c usuario.c");
system("gcc -o ex filaest.o usuario.o");
return 0;

}