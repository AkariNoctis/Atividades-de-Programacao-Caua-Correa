#include <stdio.h>

int main(void)
{
    int vetor[] = {1, 2, 3};
    int *p1;
    int **p2;
    int ***p3;

    p1 = vetor;
    p2 = &p1;
    p3 = &p2;

    printf("Usando *p1: %d\n", *p1);
    printf("Usando **p2: %d\n", **p2);
    printf("Usando ***p3: %d\n\n", ***p3);

    ***p3 = 10;

    (*p2)++;

    ***p3 = 20;

    printf("Vetor completo: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
