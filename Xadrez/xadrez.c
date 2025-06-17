#include <stdio.h>

// Função recursiva para movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimento complexo do Cavalo com loops aninhados
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1; j++) {
            if (i < 2) {
                printf("Cima\n");
                continue; /
            }
        }
    }
    printf("Direita\n"); 
}

// Função para movimento do Bispo com loops aninhados
void moverBispoAninhado() {
    int casas = 5;
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) { 
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    printf("Movimento da Torre (5 casas para a direita - recursivo):\n");
    moverTorre(5);
    
    printf("\nMovimento do Bispo (5 casas na diagonal - recursivo):\n");
    moverBispo(5);
    
    printf("\nMovimento do Bispo (5 casas na diagonal - loops aninhados):\n");
    moverBispoAninhado();
    
    printf("\nMovimento da Rainha (8 casas para a esquerda - recursivo):\n");
    moverRainha(8);
    
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita - loops complexos):\n");
    moverCavalo();
    
    return 0;
}