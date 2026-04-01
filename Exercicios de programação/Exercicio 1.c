#include <stdio.h>
int main() {
    char nome[100];
    int idade;
    char genero;
    printf("digite seu nome: ");
    scanf("%s", nome);
    printf("digite sua idade: ");
    scanf("%d", &idade);
    printf("digite seu genero: ");
    scanf(" %c", &genero);
    printf("nome: %s\n", nome);
    printf("idade: %d\n", idade); 
    printf("genero: %c\n", genero);
    return 0;
}