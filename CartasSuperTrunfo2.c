#include <stdio.h>

int main() {


    // Variáveis para a primeira carta
    char estadoC1;
    char codigoCarta1[5];
    char nomecidade1[50];
    int  populacao1;
    float area1;
    float pib1;
    int  pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Variáveis para a segunda carta
    char estadoC2;
    char codigoCarta2[5];
    char nomecidade2[50];
    int  populacao2;
    float area2;
    float pib2;
    int  pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;


    // Entrada de Dados da Carta 1
    printf("CADASTRO DA CARTA 1\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estadoC1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomecidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //calculo da densidade populacional e pib per capita carta 1

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Entrada de Dados da Carta 2
    printf("\nCADASTRO DA CARTA 2\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estadoC2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigoCarta2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomecidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //calculo da densidade populacional e pib per capita carta 2

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;


    // Exibição dos Dados Cadastrados
    printf("\nCARTAS DO SUPER TRUNFO CADASTRADAS\n");

    // Exibindo informações da Carta 1
    printf("\nCarta 1\n");
    printf("\nEstado: %c\n", estadoC1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibindo informações da Carta 2
    printf("\nCarta 2\n");
    printf("\nEstado: %c\n", estadoC2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    return 0;
}