#include <stdio.h>
#include <string.h>

#define CARGA_HORARIA_MENSAL 220.0

    float calcular_salario_base(int classe, float salario_referencia)
{
    if (classe == 1)
    {
        return salario_referencia * 1.3f;
    }
    else if (classe == 2)
    {
        return salario_referencia * 1.9f;
    }
    return 0.0f;
}

float calcular_total_hora_normal(float salario_base, float horas_normais)
{
    float salario_hora_normal = salario_base / CARGA_HORARIA_MENSAL;
    return salario_hora_normal * horas_normais;
}

float calcular_total_hora_extra(float salario_base, float horas_extras)
{
    float salario_hora_normal = salario_base / CARGA_HORARIA_MENSAL;
    float salario_hora_extra = salario_hora_normal * 1.3f;
    return salario_hora_extra * horas_extras;
}

float calcular_inss(float salario_bruto)
{
    return salario_bruto * 0.11f;
}

void emitir_contracheque(int num_inscricao, const char *nome, float total_hora_normal, float total_hora_extra, float inss, float salario_liquido)
{
    printf("\n========================================\n");
    printf("              CONTRACHEQUE              \n");
    printf("========================================\n");
    printf(" Numero de Inscricao: %d\n", num_inscricao);
    printf(" Nome: %s\n", nome);
    printf(" Salario Hora Normal: R$ %.2f\n", total_hora_normal);
    printf(" Salario Hora Extra:  R$ %.2f\n", total_hora_extra);
    printf(" Deducao INSS (11%%):  R$ %.2f\n", inss);
    printf(" Salario Liquido:     R$ %.2f\n", salario_liquido);
    printf("========================================\n");
}

int main()
{
    float salario_referencia;
    int n_funcionarios, i;

    printf("Digite o valor do salario de referencia: R$ ");
    scanf("%f", &salario_referencia);

    printf("Digite o numero de funcionarios a processar: ");
    scanf("%d", &n_funcionarios);

    for (i = 0; i < n_funcionarios; i++)
    {
        int num_inscricao, classe;
        char nome[100];
        float horas_normais, horas_extras;
        float salario_base, total_hora_normal, total_hora_extra;
        float salario_bruto, inss, salario_liquido;

        printf("\n----------------------------------------\n");
        printf("Cadastro do Funcionario %d\n", i + 1);
        printf("----------------------------------------\n");

        printf("Numero de inscricao: ");
        scanf("%d", &num_inscricao);

        getchar();

        printf("Nome do funcionario: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0;

        printf("Classe (1 ou 2): ");
        scanf("%d", &classe);

        printf("Quantidade de horas normais trabalhadas: ");
        scanf("%f", &horas_normais);

        printf("Quantidade de horas extras trabalhadas: ");
        scanf("%f", &horas_extras);

        salario_base = calcular_salario_base(classe, salario_referencia);

        if (salario_base == 0.0f)
        {
            printf("Classe invalida! Funcionario ignorado.\n");
            continue;
        }

        total_hora_normal = calcular_total_hora_normal(salario_base, horas_normais);
        total_hora_extra = calcular_total_hora_extra(salario_base, horas_extras);

        salario_bruto = total_hora_normal + total_hora_extra;
        inss = calcular_inss(salario_bruto);
        salario_liquido = salario_bruto - inss;

        emitir_contracheque(num_inscricao, nome, total_hora_normal, total_hora_extra, inss, salario_liquido);
    }

    return 0;
}
