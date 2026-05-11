#include <stdio.h>
int main() {
    int vetor[10], i, x;
    for (i = 0; i < 10; i ++) {
        printf ("digite os numeros do vetor na posicao %d: \n", i + 1);
        scanf ("%d", &vetor[i]);
    }
        printf ("digite o numero para comparacao: \n");
        scanf ("%d", &x);
    for (i = 0; i < 10; i ++) {
        if (vetor[i] == x) {
        printf ("numero %d contido no vetor", x);
        }
    }
        if (vetor[i] != x) {
            printf ("numero inexistente no vetor \n");
        }
 }
        
        
        