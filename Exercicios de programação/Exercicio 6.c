#include <stdio.h>
int main() {
    char nome[50];
    char sexo;
    printf("digite seu nome: ");
    scanf("%s", nome);
    printf("digite seu sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Nome do funcionario: %s\n", nome);
    printf("Sexo do funcionario: %c\n", sexo);
    return 0;
}
