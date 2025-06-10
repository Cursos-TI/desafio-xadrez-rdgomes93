#include <stdio.h>

int main() {
   
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    int casasTorre = 5; 
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("--- Movimento do Bispo (5 casas na diagonal para cima e a direita) ---\n");
    int casasBispo = 5;
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    int casasRainha = 8;
    int contadorRainha = 0;
    if (casasRainha > 0) {
        do {
            printf("Esquerda\n");
            contadorRainha++;
        } while (contadorRainha < casasRainha);
    } else {
        printf("A Rainha não se moveu.\n");
    }
    printf("\n");

    return 0;
}