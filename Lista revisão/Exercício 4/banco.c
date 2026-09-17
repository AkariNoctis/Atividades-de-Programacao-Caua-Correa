#include <stdio.h>
#include "banco.h"

void InicializaContas(Contas *cnt)
{
    cnt->qtd = 0;
}

void CriarNovasContas(Contas *cnt, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (cnt->qtd >= MAX_CONTAS)
        {
            printf("Limite maximo de contas atingido!\n");
            break;
        }

        float saldo;
        printf("Digite o saldo inicial da conta %d: R$ ", cnt->qtd + 1);
        scanf("%f", &saldo);

        int numero_automatico = cnt->qtd + 1;
        ContaBancaria_Criar(&cnt->vetor[cnt->qtd], numero_automatico, saldo);
        cnt->qtd++;
        printf("Conta numero %d criada com sucesso!\n", numero_automatico);
    }
}

void ImprimirContas(Contas *cnt)
{
    if (cnt->qtd == 0)
    {
        printf("\nNenhuma conta cadastrada no banco.\n");
        return;
    }

    printf("\n========================================\n");
    printf("          LISTA DE CONTAS BANCARIAS     \n");
    printf("========================================\n");
    for (int i = 0; i < cnt->qtd; i++)
    {
        printf(" Numero da Conta: %d\n", cnt->vetor[i].numero);
        printf(" Saldo Atual:     R$ %.2f\n", ConsultaSaldo(cnt->vetor[i]));
        printf("----------------------------------------\n");
    }
}

void ZerarSaldoConta(Contas *cnt, int num)
{
    int encontrada = 0;
    for (int i = 0; i < cnt->qtd; i++)
    {
        if (VerificaNum(cnt->vetor[i], num))
        {
            ContaBancaria_ZeraSaldo(&cnt->vetor[i]);
            printf("O saldo da conta %d foi zerado com sucesso!\n", num);
            encontrada = 1;
            break;
        }
    }
    if (!encontrada)
    {
        printf("Conta com o numero %d nao foi encontrada.\n", num);
    }
}