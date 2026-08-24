#include <stdio.h>

int main(void)
{
    int numeros[] = {4, 8, 12, 16, 20, 24};
    int *p = numeros;
    int soma = 0;

    printf("Elementos do vetor:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *p);
        soma += *p;
        p++;
    }

    printf("\n\nA soma de todos os elementos eh: %d\n", soma);

    return 0;
}
