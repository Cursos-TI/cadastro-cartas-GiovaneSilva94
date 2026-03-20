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

    float densidade1, densidade2;
    float pibPerCapita1, pibPercapita2;

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

    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;

    pibPerCapita1 = carta1.pib / carta1.populacao;
    pibPercapita2 = carta2.pib / carta2.populacao;

    // Exibição das cartas
    printf("\n==== CARTAS CADASTRADAS ====\n");

    printf("\n--- Carta 1 --- \n");
    printf("Cidade: %s\n", carta1.nome);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %2f km²\n", carta1.area);
    printf("PIB: %2f bilhoes\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);


    printf("\n--- Carta 2 --- \n");
    printf("Cidade: %s\n", carta2.nome);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %2f km²\n", carta2.area);
    printf("PIB: %2f bilhoes\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade2);
    printf("PIB per capita: %.2f\n", pibPercapita2 );
    
    int opcao;

printf("\nEscolha o atributo para comparar:\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Densidade Populacional\n");
printf("5 - PIB per capita\n");
scanf("%d", &opcao);

switch(opcao) {
    case 1:
        if (carta1.populacao > carta2.populacao)
            printf("Carta 1 venceu!\n");
        else if (carta2.populacao > carta1.populacao)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 2:
        if (carta1.area > carta2.area)
            printf("Carta 1 venceu!\n");
        else if (carta2.area > carta1.area)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 3:
        if (carta1.pib > carta2.pib)
            printf("Carta 1 venceu!\n");
        else if (carta2.pib > carta1.pib)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 4:
        if (densidade1 < densidade2)
            printf("Carta 1 venceu!\n");
        else if (densidade2 < densidade1)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 5:
        if (pibPerCapita1 > pibPercapita2)
            printf("Carta 1 venceu!\n");
        else if ( pibPercapita2> pibPerCapita1)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opcao invalida!\n");
}



    return 0;

}

 

