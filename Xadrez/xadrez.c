#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    // Movimento do Bispo (5 casas na diagonal para cima e direita) usando while
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int casas_bispo = 0;
    while (casas_bispo < 5) {
        printf("Cima, Direita\n");
        casas_bispo++;
    }
    
    
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int casas_rainha = 0;
    do {
        printf("Esquerda\n");
        casas_rainha++;
    } while (casas_rainha < 8);
    
    
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");
    
    // Primeira parte do L: 2 casas para baixo (usando for)
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    
   
    int casa_esquerda = 0;
    while (casa_esquerda < 1) {
        printf("Esquerda\n");
        casa_esquerda++;
    }
    
    return 0;
}