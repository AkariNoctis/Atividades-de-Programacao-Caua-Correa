#include <stdio.h>

int *encontrarMaior(int *inicio, int tamanho)
{
    int *maior = inicio;

    for (int i = 1; i < tamanho; i++)
    {
        if (*(inicio + i) > *maior)
        {
            maior = inicio + i;
        }
    }

    return maior;
}

int main(void)
{
    int vetor[5];

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int *enderecoMaior = encontrarMaior(vetor, 5);
    int posicao = enderecoMaior - vetor;

    printf("\nMaior valor: %d\n", *enderecoMaior);
    printf("Posicao no vetor: %d\n", posicao);
    printf("Endereco de memoria: %p\n", (void *)enderecoMaior);

    return 0;
}
