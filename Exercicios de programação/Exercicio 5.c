#include <stdio.h>
int main() {
    #define taxa 1.23
    float valor_inicial, valor_final;
    printf("digite o valor inicial: ");
    scanf ("%f", &valor_inicial);
    valor_final = valor_inicial * taxa;
    printf("Valor final: %.2f\n", valor_final);
    return 0;   
}