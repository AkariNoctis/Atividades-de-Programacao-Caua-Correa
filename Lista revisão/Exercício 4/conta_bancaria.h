#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

typedef struct {
    int numero;
    float saldo;
} ContaBancaria;

void ContaBancaria_Criar(ContaBancaria *c, int numero, float saldo);
int VerificaNum(ContaBancaria conta, int num);
float ConsultaSaldo(ContaBancaria conta);
void ContaBancaria_ZeraSaldo(ContaBancaria *conta);

#endif