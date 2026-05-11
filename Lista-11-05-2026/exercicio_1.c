#include <stdio.h>
int main() {
    int vetor[10], i;
    for (i = 0; i < 10; i++) {
        printf("digite o numero de posicao %d: \n",i + 1);
        scanf("%d",&vetor[i]);
    }   
        printf("lista: \n");
    for (i = 0; i < 10; i++){
        printf("%d \n", vetor[i]);
    }
    return 0;
}

