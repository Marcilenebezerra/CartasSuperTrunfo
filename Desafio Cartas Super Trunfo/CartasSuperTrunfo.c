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
    float densidade1;
    float pibpercapita1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibpercapita2;

    // Leitura dos dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");

    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Area (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1; 

    // Leitura dos dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);


    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2; 

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}