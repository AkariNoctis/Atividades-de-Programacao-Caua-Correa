#include <stdio.h>
#include <math.h>

typedef struct
{
    float real;
    float imaginario;
} Complexo;

// Atribui valores para os campos do número complexo
void complexo_atribui(Complexo *c, float real, float imaginario)
{
    c->real = real;
    c->imaginario = imaginario;
}

// Imprime o número no formato "R + Ci" (ou "R - Ci")
void complexo_imprime(const Complexo *c)
{
    if (c->imaginario == 0.0f)
    {
        printf("%.2f\n", c->real);
        return;
    }

    if (c->imaginario > 0)
    {
        printf("%.2f + %.2fi\n", c->real, c->imaginario);
    }
    else
    {
        printf("%.2f - %.2fi\n", c->real, fabsf(c->imaginario));
    }
}

// Copia o valor de um número complexo para outro
void complexo_copia(Complexo *destino, const Complexo *origem)
{
    destino->real = origem->real;
    destino->imaginario = origem->imaginario;
}

// Soma dois números complexos
Complexo complexo_soma(const Complexo *a, const Complexo *b)
{
    Complexo resultado;
    resultado.real = a->real + b->real;
    resultado.imaginario = a->imaginario + b->imaginario;
    return resultado;
}

// Testa se o número é real
int complexo_ehReal(const Complexo *c)
{
    return c->imaginario == 0.0f;
}

int main()
{
    Complexo a, b, c, copia;

    complexo_atribui(&a, 3.0f, 4.0f);
    complexo_atribui(&b, -1.5f, 2.0f);

    printf("a = ");
    complexo_imprime(&a);

    printf("b = ");
    complexo_imprime(&b);

    c = complexo_soma(&a, &b);

    printf("a + b = ");
    complexo_imprime(&c);

    complexo_copia(&copia, &a);
    printf("Copia de a = ");
    complexo_imprime(&copia);

    if (complexo_ehReal(&a))
    {
        printf("a eh real.\n");
    }
    else
    {
        printf("a nao eh real.\n");
    }

    Complexo d;
    complexo_atribui(&d, 7.0f, 0.0f);

    if (complexo_ehReal(&d))
    {
        printf("d eh real.\n");
    }
    else
    {
        printf("d nao eh real.\n");
    }

    return 0;
}