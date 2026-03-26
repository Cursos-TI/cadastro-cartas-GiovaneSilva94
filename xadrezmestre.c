#include <stdio.h>

// =========================
// TORRE (RECURSIVIDADE)
// =========================
void moverTorre(int casas) {
    if (casas == 0)
        return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// =========================
// RAINHA (RECURSIVIDADE)
// =========================
void moverRainha(int casas) {
    if (casas == 0)
        return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// =========================
// BISPO (RECURSIVIDADE + LOOPS ANINHADOS)
// =========================
void moverBispo(int casas) {
    if (casas == 0)
        return;

    // Loop externo (vertical)
    for (int i = 1; i <= 1; i++) {

        // Loop interno (horizontal)
        int j = 1;
        while (j <= 1) {
            printf("Cima Direita\n");
            j++;
        }
    }

    moverBispo(casas - 1);
}

// =========================
// CAVALO (LOOPS COMPLEXOS)
// =========================
void moverCavalo() {

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo (vertical)
    for (int i = 1; i <= movimentosVerticais; i++) {

        // Exemplo de uso de continue
        if (i <= movimentosVerticais) {
            printf("Cima\n");
        }

        // Quando terminar o movimento vertical
        if (i == movimentosVerticais) {

            int j = 1;

            // Loop interno (horizontal)
            while (j <= movimentosHorizontais) {

                // Exemplo de uso de break
                if (j > movimentosHorizontais) {
                    break;
                }

                printf("Direita\n");
                j++;
            }
        }
    }
}

// =========================
// FUNÇÃO PRINCIPAL
// =========================
int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // TORRE
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // BISPO
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // RAINHA
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // CAVALO
    printf("\n");
    moverCavalo();

    return 0;
}