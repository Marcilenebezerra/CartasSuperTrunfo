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

    // Cálculos para a primeira carta
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

    // Cálculos para a segunda carta
    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição básica dos dados
    printf("\nDados das Cartas:\n");
    printf("Carta 1: %s (%c)\n", cidade1, estado1);
    printf("Carta 2: %s (%c)\n", cidade2, estado2);

    // Comparação por população (maior vence)
    printf("\nComparacao por Populacao:\n");
    if(populacao1 > populacao2) {
        printf("%s vence com %d habitantes\n", cidade1, populacao1);
    } else {
        if(populacao2 > populacao1) {
            printf("%s vence com %d habitantes\n", cidade2, populacao2);
        } else {
            printf("Empate! Ambas tem %d habitantes\n", populacao1);
        }
    }

    // Comparação por área (maior vence)
    printf("\nComparacao por Area:\n");
    if(area1 > area2) {
        printf("%s vence com %.2f km²\n", cidade1, area1);
    } else {
        if(area2 > area1) {
            printf("%s vence com %.2f km²\n", cidade2, area2);
        } else {
            printf("Empate! Ambas tem %.2f km²\n", area1);
        }
    }

    // Comparação por densidade (menor vence)
    printf("\nComparacao por Densidade Populacional:\n");
    if(densidade1 < densidade2) {
        printf("%s vence com %.2f hab/km²\n", cidade1, densidade1);
    } else {
        if(densidade2 < densidade1) {
            printf("%s vence com %.2f hab/km²\n", cidade2, densidade2);
        } else {
            printf("Empate! Ambas tem %.2f hab/km²\n", densidade1);
        }
    }

    return 0;
}