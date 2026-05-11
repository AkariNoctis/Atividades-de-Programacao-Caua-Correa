#include <stdio.h>
int main() {
    int vetor[10], i, negativos = 0, positivos = 0, zero = 0;
    for ( i = 0; i < 10; i ++) {
        printf ("digite o numero de posicao %d: \n", i + 1);
        scanf ("%d", &vetor[i]);
    
    if (vetor[i] > 0) {
        positivos ++;
    } else if (vetor[i] < 0) {
        negativos ++;       
    } else {
        zero ++;
    }}
        printf ("Positivos: %d \n", positivos);
        printf ("negativos: %d \n", negativos);
        printf ("zeros: %d \n", zero);
    return 0;
}