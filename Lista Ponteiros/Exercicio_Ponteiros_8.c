#include <stdio.h>

int contarVogais(const char *texto)
{
    int total = 0;

    while (*texto != '\0')
    {
        char c = *texto;

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            total++;
        }

        texto++;
    }

    return total;
}

int main(void)
{
    char frase[100];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    int quant = contarVogais(frase);

    printf("Quantidade de vogais: %d\n", quant);

    return 0;
}
