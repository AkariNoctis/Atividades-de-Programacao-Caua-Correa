#include "conta_bancaria.h"

void ContaBancaria_Criar(ContaBancaria *c, int numero, float saldo)
{
    c->numero = numero;
    c->saldo = saldo;
}

int VerificaNum(ContaBancaria conta, int num)
{
    return conta.numero == num;
}

float ConsultaSaldo(ContaBancaria conta)
{
    return conta.saldo;
}

void ContaBancaria_ZeraSaldo(ContaBancaria *conta)
{
    conta->saldo = 0.0f;
}