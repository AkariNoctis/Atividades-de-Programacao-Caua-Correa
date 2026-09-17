#ifndef BANCO_H
#define BANCO_H

#include "conta_bancaria.h"

#define MAX_CONTAS 100

typedef struct
{
    ContaBancaria vetor[MAX_CONTAS];
    int qtd;
} Contas;

void InicializaContas(Contas *cnt);
void CriarNovasContas(Contas *cnt, int n);
void ImprimirContas(Contas *cnt);
void ZerarSaldoConta(Contas *cnt, int num);

#endif