#include <stdio.h>
int main() {
    int v = 20, *p;
    p = &v;
    printf ("Valor: %d \nEndereco: %p \n", v, &v );
    printf ("Conteudo do ponteiro: %p \nValor apontado pelo ponteiro: %d \n",p, *p);
    *p = 35;
    printf ("Novo valor: %d \n", *p);
    


}