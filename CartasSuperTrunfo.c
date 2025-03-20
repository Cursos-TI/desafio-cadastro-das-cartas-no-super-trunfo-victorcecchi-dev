#include <stdio.h>

//Criando as Cartas do Super Trunfo

//Este código coleta as informações digitadas no terminal e exibe no formato de carta "Super Trunfo".

int main() {

    // Declaração das variáveis para armazenar informações das cartas

    char estado[50];  // Nome do estado (Carta 1)
    char estado2[50]; // Nome do estado (Carta 2)

    char carta[50]; // Código identificador da carta 1
    char carta2[50]; // Código identificador da carta 2

    char cidade[50];  // Nome da cidade (Carta 1)
    char cidade2[50]; // Nome da cidade (Carta 2)

    int populacao;  // População da cidade (Carta 1)
    int populacao2; // População da cidade (Carta 2)

    float area;  // Área da cidade em km² (Carta 1)
    float area2; // Área da cidade em km² (Carta 2)

    float pib;  // PIB da cidade em bilhões (Carta 1)
    float pib2; // PIB da cidade em bilhões (Carta 2)

    int pontos;  // Número de pontos turísticos (Carta 1)
    int pontos2; // Número de pontos turísticos (Carta 2)

    // Coleta de dados da Carta 1

    printf("Digite o estado da carta 1: ");
    scanf("%s", estado);
    
    printf("Digite o código da carta 1: ");
    scanf("%s", carta);

    printf("Digite a cidade da carta 1: ");
    scanf("%s", cidade);

    printf("Digite a população da carta 1: ");
    scanf("%i", &populacao);

    printf("Digite a área (km²) da carta 1: ");
    scanf("%f", &area);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da carta 1: ");
    scanf("%i", &pontos);

    // Coleta de dados da Carta 2

    printf("Digite o estado da carta 2: ");
    scanf("%s", estado2);
    
    printf("Digite o código da carta 2: ");
    scanf("%s", carta2);

    printf("Digite a cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a população da carta 2: ");
    scanf("%i", &populacao2);

    printf("Digite a área (km²) da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da carta 2: ");
    scanf("%i", &pontos2);

    // Exibição das informações coletadas


    // Carta 1
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %i\n", pontos);

    // Carta 2
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %i\n", pontos2);

    return 0;
}
