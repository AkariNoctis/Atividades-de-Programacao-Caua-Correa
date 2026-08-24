#include <stdio.h>

int main(void)
{
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int maior = *(*(matriz + 0) + 0);
    int linhaMaior = 0, colunaMaior = 0;

    printf("Elementos da matriz:\n");
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            int atual = *(*(matriz + linha) + coluna);
            printf("%d\t", atual);

            if (atual > maior)
            {
                maior = atual;
                linhaMaior = linha;
                colunaMaior = coluna;
            }
        }
        printf("\n");
    }
    printf("\n");

    for (int linha = 0; linha < 3; linha++)
    {
        int somaLinha = 0;
        for (int coluna = 0; coluna < 4; coluna++)
        {
            somaLinha += *(*(matriz + linha) + coluna);
        }
        printf("Soma da linha %d: %d\n", linha, somaLinha);
    }
    printf("\n");

    printf("Maior elemento: %d\n", maior);
    printf("Armazenado na linha %d, coluna %d\n", linhaMaior, colunaMaior);

    return 0;
}
