#include <stdio.h>

struct CartaCidade {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct CartaCidade carta1, carta2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Cadastro Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nome);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cadastro Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nome);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;

    pibPerCapita1 = (carta1.pib * 1000000000) / carta1.populacao;
    pibPerCapita2 = (carta2.pib * 1000000000) / carta2.populacao;

    // Exibição
    printf("\n==== CARTAS CADASTRADAS ====\n");

    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s\n", carta1.nome);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes\n", carta1.pib);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s\n", carta2.nome);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes\n", carta2.pib);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // DESAFIO FINAL
    int op1, op2;

    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Densidade\n5 - PIB per capita\n");
    scanf("%d", &op1);

    printf("\nEscolha o SEGUNDO atributo:\n");

    switch(op1) {
        case 1:
            printf("2 - Area\n3 - PIB\n4 - Densidade\n5 - PIB per capita\n");
            break;
        case 2:
            printf("1 - Populacao\n3 - PIB\n4 - Densidade\n5 - PIB per capita\n");
            break;
        case 3:
            printf("1 - Populacao\n2 - Area\n4 - Densidade\n5 - PIB per capita\n");
            break;
        case 4:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n5 - PIB per capita\n");
            break;
        case 5:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Densidade\n");
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    scanf("%d", &op2);

    if (op1 == op2) {
        printf("Erro: atributos iguais!\n");
        return 0;
    }

    float v1_c1, v1_c2, v2_c1, v2_c2;
    float soma1, soma2;

    // Primeiro atributo
    switch(op1) {
        case 1: v1_c1 = carta1.populacao; v1_c2 = carta2.populacao; break;
        case 2: v1_c1 = carta1.area; v1_c2 = carta2.area; break;
        case 3: v1_c1 = carta1.pib; v1_c2 = carta2.pib; break;
        case 4: v1_c1 = densidade1; v1_c2 = densidade2; break;
        case 5: v1_c1 = pibPerCapita1; v1_c2 = pibPerCapita2; break;
    }

    // Segundo atributo
    switch(op2) {
        case 1: v2_c1 = carta1.populacao; v2_c2 = carta2.populacao; break;
        case 2: v2_c1 = carta1.area; v2_c2 = carta2.area; break;
        case 3: v2_c1 = carta1.pib; v2_c2 = carta2.pib; break;
        case 4: v2_c1 = densidade1; v2_c2 = densidade2; break;
        case 5: v2_c1 = pibPerCapita1; v2_c2 = pibPerCapita2; break;
    }

    // Regra da densidade (menor vence)
    if (op1 == 4) {
        v1_c1 = 1 / v1_c1;
        v1_c2 = 1 / v1_c2;
    }

    if (op2 == 4) {
        v2_c1 = 1 / v2_c1;
        v2_c2 = 1 / v2_c2;
    }

    // Soma
    soma1 = v1_c1 + v2_c1;
    soma2 = v1_c2 + v2_c2;

    // Resultado
    printf("\n==== RESULTADO FINAL ====\n");

    printf("%s: %.2f\n", carta1.nome, soma1);
    printf("%s: %.2f\n", carta2.nome, soma2);

    if (soma1 > soma2)
        printf("Vencedor: %s\n", carta1.nome);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", carta2.nome);
    else
        printf("Empate!\n");

    return 0;
}