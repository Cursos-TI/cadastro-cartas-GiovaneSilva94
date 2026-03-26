#include <stdio.h>

int main() {

    // =========================
    // TORRE (usando FOR)
    // =========================
    // A torre vai andar 5 casas para a direita

    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // =========================
    // BISPO (usando WHILE)
    // =========================
    // O bispo vai andar 5 casas na diagonal (Cima + Direita)

    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\nMovimento do Bispo:\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // =========================
    // RAINHA (usando DO-WHILE)
    // =========================
    // A rainha vai andar 8 casas para a esquerda

    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\nMovimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // =========================
// CAVALO (usando loops aninhados)
// =========================
// O cavalo vai andar 2 casas para baixo e 1 para a esquerda

int movimentoVertical = 2;
int movimentoHorizontal = 1;

printf("\nMovimento do Cavalo:\n");

// Loop externo (FOR) - movimento para baixo
for (int i = 1; i <= movimentoVertical; i++) {
    printf("Baixo\n");

    // Quando terminar de descer 2 casas,
    // executa o movimento lateral (esquerda)
    if (i == movimentoVertical) {
        int j = 1;

        // Loop interno (WHILE) - movimento para esquerda
        while (j <= movimentoHorizontal) {
            printf("Esquerda\n");
            j++;
        }
    }
}

    
    return 0;
}