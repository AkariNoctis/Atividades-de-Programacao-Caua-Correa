#include <stdio.h>
int main() {
    int vetor[10], i, soma = 0;
    for (i = 0; i < 10; i ++) {
        printf ("Digite o numero de posicao %d: \n", i + 1);
        scanf ("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
        printf ("soma total: %d \n", soma);
}