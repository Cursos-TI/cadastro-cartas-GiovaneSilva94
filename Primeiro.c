#include <stdio.h>

struct CartaCidade {
    char nome [50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main () {
    struct CartaCidade carta1, carta2;

    // Cadastro da primeira Carta
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Nome da Cidade: ");
    scanf("%s", carta1.nome);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km²):");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cadastro da segunda carta 
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Nome da Cidade: ");
    scanf("%s", carta2.nome);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km²): ");
    scanf("%f",&carta2.area);

    printf("PIB  (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição das cartas
    printf("\n==== CARTAS CADASTRADAS ====\n");

    printf("\n--- Carta 1 --- \n");
    printf("Cidade: %s\n", carta1.nome);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %2f km²\n", carta1.area);
    printf("PIB: %2f bilhoes\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\n--- Carta 2 --- \n");
    printf("Cidade: %s\n", carta1.nome);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %2f km²\n", carta2.area);
    printf("PIB: %2f bilhoes\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    
    return 0;

}

 

