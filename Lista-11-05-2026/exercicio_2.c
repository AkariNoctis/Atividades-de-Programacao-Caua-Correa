#include <stdio.h>
int main() {
    int vetor[10], i;
    for ( i = 0; i < 10; i ++) {
        printf("digite o numero de posicao %d: \n", i + 1);
        scanf("%d", &vetor[i]);
    }
        printf(" numeros pares do conjunto: \n");
    for (i = 0; i < 10; i ++) {
        if (vetor[i] %2 == 0) {
            printf("%d \n", vetor[i]);
        }
    }
}