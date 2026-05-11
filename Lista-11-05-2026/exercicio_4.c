#include <stdio.h>
int main() {
    int vetor[10], i, maior;
    for (i = 0; i < 10; i ++) {
        printf ("Digite o numero de posicao %d: \n", i + 1);
        scanf ("%d", &vetor[i]);
    }
        maior = vetor[0];
    for (i = 0; i < 10; i ++) {
        if (vetor[i] > maior) {
        maior = vetor[i];
        }
    }
        printf ("maior numero do vetor: %d \n", maior);

}