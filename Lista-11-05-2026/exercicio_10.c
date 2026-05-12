#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int iguais = 0,tamanho = 0, i = 0;
    char palavra[50];

    printf("Digite uma palavra (sem espacos): ");
    scanf("%49s", palavra);

    tamanho = strlen(palavra);
    if (tamanho > 0) {
        tamanho--;
    }

    while (tamanho >= i) {
        if (palavra[i] != palavra[tamanho]) {
            iguais = 1;
            break;
        }
        i++;
        tamanho--;
    }

    if (iguais == 0) {
        printf("Palindromo\n");
    } else {
        printf("nao eh palindromo\n");
    }

    return 0;
}
