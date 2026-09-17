#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100
#define TAM_NOME 50

typedef struct
{
    char nome[TAM_NOME];
    int matricula;
    float nota1;
    float nota2;
} Aluno;

typedef struct
{
    Aluno alunos[MAX_ALUNOS];
    int qtd;
} Turma;

void limpar_entrada(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

void turma_inicializa(Turma *t)
{
    t->qtd = 0;
}

int turma_cadastra(Turma *t, const char *nome, int matricula, float nota1, float nota2)
{
    if (t->qtd >= MAX_ALUNOS)
    {
        return 0;
    }

    strcpy(t->alunos[t->qtd].nome, nome);
    t->alunos[t->qtd].matricula = matricula;
    t->alunos[t->qtd].nota1 = nota1;
    t->alunos[t->qtd].nota2 = nota2;
    t->qtd++;

    return 1;
}

void turma_imprime(const Turma *t)
{
    if (t->qtd == 0)
    {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    for (int i = 0; i < t->qtd; i++)
    {
        printf("\n----------------------------------------\n");
        printf(" Aluno %d\n", i + 1);
        printf("----------------------------------------\n");
        printf(" Nome:      %s\n", t->alunos[i].nome);
        printf(" Matricula: %d\n", t->alunos[i].matricula);
        printf(" Nota 1:    %.2f\n", t->alunos[i].nota1);
        printf(" Nota 2:    %.2f\n", t->alunos[i].nota2);
    }
    printf("----------------------------------------\n");
}

int main()
{
    Turma turma;
    turma_inicializa(&turma);

    int n;
    printf("Digite a quantidade de alunos a cadastrar: ");
    scanf("%d", &n);
    limpar_entrada();

    if (n > MAX_ALUNOS)
    {
        printf("Quantidade informada excede o limite da turma (%d).\n", MAX_ALUNOS);
        n = MAX_ALUNOS;
    }

    for (int i = 0; i < n; i++)
    {
        char nome[TAM_NOME];
        int matricula;
        float nota1, nota2;

        printf("\nCadastro do Aluno %d\n", i + 1);

        printf("Nome: ");
        fgets(nome, TAM_NOME, stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Matricula: ");
        scanf("%d", &matricula);
        limpar_entrada();

        printf("Nota 1: ");
        scanf("%f", &nota1);
        limpar_entrada();

        printf("Nota 2: ");
        scanf("%f", &nota2);
        limpar_entrada();

        if (!turma_cadastra(&turma, nome, matricula, nota1, nota2))
        {
            printf("Erro: turma cheia. Cadastro interrompido.\n");
            break;
        }
    }

    printf("\n========================================\n");
    printf("          RELATORIO DE ALUNOS           \n");
    printf("========================================\n");
    turma_imprime(&turma);

    return 0;
}
