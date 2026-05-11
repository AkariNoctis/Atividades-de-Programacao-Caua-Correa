#include <stdio.h>
int main() {
    char palavra[100];
    int tamanho = 0;
        printf("Digite uma palavra (sem espacos): \n");
        scanf("%99s", palavra);
    while (palavra[tamanho] != '\0') {
        tamanho++;
    }
        printf("Numero de caracteres: %d\n", tamanho);
        
        return 0;
}