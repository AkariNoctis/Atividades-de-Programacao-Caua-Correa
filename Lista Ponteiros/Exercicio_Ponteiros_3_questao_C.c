#include <stdio.h>
int main(void) {
 int valor = 50;
 int *p;
 p = &valor;
 printf("Valor inicial: %d\n", *p);
*p = 100;
 printf("Valor corrigido: %d\n", *p);
 return 0;
}