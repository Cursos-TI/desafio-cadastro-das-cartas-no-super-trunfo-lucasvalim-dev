#include <stdio.h>


int main() {

    //Variáveis que conterão as informações das cartas do programa SUPER TRUNFO.

    char estado, estado2;
    char codigoCarta[20], codigoCarta2[20];
    char nomeCidade[20], nomeCidade2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontoTuristico, pontoTuristico2;

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
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontoTuristico);
    
    //Início do processo para leitura dessas informações da Carta 2.

    printf("Digite as informações da Carta 2: \n");

    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontoTuristico2);

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);

    return 0;
}
