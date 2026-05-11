#include <stdio.h>
int main() {
    int vetA[10], vetB[10], vetC[10],i;
        printf("Digite os 10 numeros do vetor A:\n");
    for ( i = 0; i < 10; i ++) {
        printf ("Posicao %d: ", i + 1);
        scanf ("%d", &vetA[i]);
    }
        printf("\nDigite os 10 numeros do vetor B:\n");
    for ( i = 0; i < 10; i ++) {    
        printf ("Posicao %d: ", i + 1);
        scanf ("%d", &vetB[i]);
        vetC[i] = vetA[i] + vetB[i];
    } 
        printf ("\nVetor C (soma de A + B): \n");
    for (i = 0; i < 10; i ++) {
        printf ("%d \n", vetC[i]);
    }

        return 0;
}