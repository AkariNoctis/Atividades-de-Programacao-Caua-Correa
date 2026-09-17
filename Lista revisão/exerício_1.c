#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Registro {
    char nome[100];
    int idade;
    char sexo[25];
    float salario;
} Registro;
int main() {
    Registro Pessoa;
    printf ("Digite o nome: \n");
    scanf ("%s", &Pessoa.nome);
    fflush(stdin);
    printf ("Digite a Idade: \n");
    scanf ("%d", &Pessoa.idade);
    fflush(stdin);
    printf ("Digite o Sexo: \n");
    scanf ("%s", &Pessoa.sexo);
    printf ("Digite o Salario: \n");
    scanf ("%f", &Pessoa.salario);

    printf ("Nome: %s \n",Pessoa.nome);
    printf ("Idade: %d \n",Pessoa.idade);
    printf ("Sexo: %s \n", Pessoa.sexo);
    printf ("Salario: %.2f \n", Pessoa.salario);

    return 0;
}