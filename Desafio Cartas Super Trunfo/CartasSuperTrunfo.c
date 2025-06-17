#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Leitura dos dados da primeira carta
    printf("Digite o estado da carta 1 (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo da carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade 1: ");
    scanf(" %s", cidade1);
    
    printf("Digite a populacao da cidade 1: ");
    scanf("%d", &populacao1);
    
    printf("Digite a area da cidade 1 (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade 1 (bilhoes): ");
    scanf("%f", &pib1);
    
    printf("Digite os pontos turisticos da cidade 1: ");
    scanf("%d", &pontos1);

    // Leitura dos dados da segunda carta
    printf("\nDigite o estado da carta 2 (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo da carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade 2: ");
    scanf(" %s", cidade2);
    
    printf("Digite a populacao da cidade 2: ");
    scanf("%d", &populacao2);
    
    printf("Digite a area da cidade 2 (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade 2 (bilhoes): ");
    scanf("%f", &pib2);
    
    printf("Digite os pontos turisticos da cidade 2: ");
    scanf("%d", &pontos2);

    // Mostrando os dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    // Mostrando os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    return 0;
}