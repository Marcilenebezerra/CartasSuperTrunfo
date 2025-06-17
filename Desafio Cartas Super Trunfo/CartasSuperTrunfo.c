#include <stdio.h>

int main() {
    // Variáveis das cartas (pré-cadastradas)
    char cidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;
    float densidade1 = 8102.47;
    float pibpercapita1 = 56724.32;

    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;
    float densidade2 = 5622.24;
    float pibpercapita2 = 44532.91;

    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2; 

    // Menu para escolher o primeiro atributo
    printf("\n=== SUPER TRUNFO - COMPARACAO AVANCADA ===\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    
    for(int i = 1; i <= 6; i++) {
        if(i != opcao1) {
            switch(i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }
    printf("Opcao: ");
    scanf("%d", &opcao2);

    while(opcao2 == opcao1) {
        printf("Escolha um atributo DIFERENTE do primeiro: ");
        scanf("%d", &opcao2);
    }

    switch(opcao1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            valor1_carta1 = pontos1;
            valor1_carta2 = pontos2;
            break;
        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            break;
        case 6:
            valor1_carta1 = pibpercapita1;
            valor1_carta2 = pibpercapita2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    switch(opcao2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            valor2_carta1 = pontos1;
            valor2_carta2 = pontos2;
            break;
        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            break;
        case 6:
            valor2_carta1 = pibpercapita1;
            valor2_carta2 = pibpercapita2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    printf("\n=== RESULTADOS DA COMPARACAO ===\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n\n", cidade2);

    printf("Atributo 1: ");
    switch(opcao1) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turisticos\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
        case 6: printf("PIB per Capita\n"); break;
    }
    
    printf("%s: %.2f\n", cidade1, valor1_carta1);
    printf("%s: %.2f\n", cidade2, valor1_carta2);
    
    int vence1 = (opcao1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
    printf("Vencedor do 1o atributo: %s\n\n", vence1 ? cidade1 : cidade2);

    printf("Atributo 2: ");
    switch(opcao2) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turisticos\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
        case 6: printf("PIB per Capita\n"); break;
    }
    
    printf("%s: %.2f\n", cidade1, valor2_carta1);
    printf("%s: %.2f\n", cidade2, valor2_carta2);
    
    int vence2 = (opcao2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);
    printf("Vencedor do 2o atributo: %s\n\n", vence2 ? cidade1 : cidade2);

    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;
    
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if(soma1 > soma2) {
        printf("\nRESULTADO FINAL: %s venceu!\n", cidade1);
    } else if(soma2 > soma1) {
        printf("\nRESULTADO FINAL: %s venceu!\n", cidade2);
    } else {
        printf("\nRESULTADO FINAL: Empate!\n");
    }

    return 0;
}