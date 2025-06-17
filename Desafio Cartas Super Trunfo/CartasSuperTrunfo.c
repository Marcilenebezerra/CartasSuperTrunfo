#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    int opcao;

    // Cadastro da Carta 1
    printf("CADASTRO CARTA 1\n");
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
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\nCADASTRO CARTA 2\n");
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
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Menu de comparação
    printf("\nESCOLHA O ATRIBUTO PARA COMPARAR:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    // Cálculo de densidade (apenas se necessário)
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Comparação com switch
    switch(opcao) {
        case 1: // População
            printf("\nCOMPARANDO POPULACAO:\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);
            
            if(populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } else if(populacao2 > populacao1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;

        case 2: // Área
            printf("\nCOMPARANDO AREA:\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            
            if(area1 > area2) {
                printf("Vencedor: %s\n", cidade1);
            } else if(area2 > area1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;

        case 3: // PIB
            printf("\nCOMPARANDO PIB:\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            
            if(pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            } else if(pib2 > pib1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("\nCOMPARANDO PONTOS TURISTICOS:\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);
            
            if(pontos1 > pontos2) {
                printf("Vencedor: %s\n", cidade1);
            } else if(pontos2 > pontos1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;

        case 5: // Densidade Demográfica
            printf("\nCOMPARANDO DENSIDADE DEMOGRAFICA:\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            
            if(densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade)\n", cidade1);
            } else if(densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade)\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;

        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}