#include <stdio.h>

int main(void)
{
    int valores[] = {1, 2, 3, 4, 5, 6};
    int *inicio = valores;
    int *fim = valores + 5;
    int temp;

    while (inicio < fim)
    {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}
