#include <stdio.h>
#include "banco.h"

int main()
{
    Contas banco;
    InicializaContas(&banco);

    int opcao, n, num_conta;

    do
    {
        printf("\n--- MENU BANCO ---\n");
        printf("1. Criar novas contas\n");
        printf("2. Imprimir todas as contas\n");
        printf("3. Zerar saldo de uma conta\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Quantas contas deseja criar? ");
            scanf("%d", &n);
            CriarNovasContas(&banco, n);
            break;
        case 2:
            ImprimirContas(&banco);
            break;
        case 3:
            printf("Digite o numero da conta que deseja zerar o saldo: ");
            scanf("%d", &num_conta);
            ZerarSaldoConta(&banco, num_conta);
            break;
        case 0:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}