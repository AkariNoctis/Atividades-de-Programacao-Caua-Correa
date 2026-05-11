#include <stdio.h>
int main() {
    int vetor[10], i;
    for ( i = 0; i < 10; i ++) {
        printf ("Digite o numero de posicao %d: \n", i + 1);
        scanf ("%d", &vetor[i]);
    }
        printf("\x1b[2J\x1b[H");
        fflush(stdin);
        printf ("Ordem decrescente: \n");
    for ( i = 9; i >= 0
        ; i --) {
        printf("%d \n", vetor[i]);
    }
    return 0;
}