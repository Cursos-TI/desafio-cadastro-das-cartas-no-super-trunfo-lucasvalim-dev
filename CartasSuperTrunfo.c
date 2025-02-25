#include <stdio.h>


int main() {

    //Variáveis que conterão as informações das cartas do programa SUPER TRUNFO.

    char estado, estado2;
    char codigoCarta[20], codigoCarta2[20];
    char nomeCidade[20], nomeCidade2[20];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontoTuristico, pontoTuristico2;
    float densPopulacao, densPopulacao2;
    float pibPerCap, pibPerCap2;
    float superPoder, superPoder2;

    //Início do processo para leitura dessas informações da Carta 1.

    printf("***Jogo do Super Trunfo***\n");

    printf("Digite as informações da Carta 1: \n");

    printf("Digite o Estado: \n");
    scanf("%c", &estado);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigoCarta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Digite a População: \n");
    scanf("%lu", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontoTuristico);

    //Lógica para o cálculo da Densidade Populacional e o PIB per Capita Carta 2.

    densPopulacao = (float)populacao / area;
    pibPerCap = pib / (float)populacao;

    //Lógica para o cálculo do Super Poder Carta 1.

    superPoder = (float)populacao + area + pib + (float)pontoTuristico - densPopulacao + pibPerCap;

    printf("\n");
    
    //Início do processo para leitura dessas informações da Carta 2.

    printf("Digite as informações da Carta 2: \n");

    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a População: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontoTuristico2);

    //Lógica para o cálculo da Densidade Populacional e o PIB per Capita Carta 2.

    densPopulacao2 = (float)populacao2 / area2;
    pibPerCap2 = pib2 / (float)populacao2;

    //Lógica para o cálculo do Super Poder Carta 2.

    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontoTuristico2 - densPopulacao2 + pibPerCap2;

    printf("\n");

    //Prints para o que é digitado no console pelo "usuário".

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico);
    printf("Densidade populacional: %.2f hab/km²\n", densPopulacao);
    printf("PIB per Capita: %.2f reais\n", pibPerCap);
    printf("\n");
    printf("Super Poder Carta 1: %.2f\n", superPoder);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);
    printf("Densidade populacional: %.2f hab/km²\n", densPopulacao2);
    printf("PIB per Capita: %.2f reais\n", pibPerCap2);
    printf("\n");
    printf("Super Poder Carta 2: %.2f\n", superPoder2);

    printf("\n");

    //Comparação das Cartas.

    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico > pontoTuristico2);
    printf("Densidade Populacional: %d\n", densPopulacao < densPopulacao2);
    printf("PIB per Capita: %d\n", pibPerCap > pibPerCap2);
    printf("Super Poder: %d\n", superPoder > superPoder2);

    return 0;
}
