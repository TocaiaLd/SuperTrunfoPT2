#include <stdio.h>

int main(){
    
    //variaveis das cartas
    char estado1, estado2;
    char codigoDaCarta1[4], codigoDaCarta2[4];
    char nomeDaCidade1[20], nomeDaCidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2; 
    float pibPerCapita1, pibPerCapita2; 
    float superPoder1, superPoder2;
    
    //Salvando os dados da primeira carta
    printf("Bem-vindo ao Super Trunfo! Para começar, digite os dados de sua carta!\n|----Primeira Carta----|");

    printf("\nQual o estado da carta? (letra de A a H) ");
    scanf(" %c", &estado1);

    printf("Qual o codigo da carta? (máximo de 3 letras. Ex: A03) ");
    scanf("%s", &codigoDaCarta1);

    printf("Qual o nome da cidade? ");
    scanf("%s", &nomeDaCidade1);

    printf("Qual o tamanho população? (Deve ser numero inteiro) ");
    scanf("%d", &populacao1);

    printf("Qual a área? (Use o ponto no lugar da vírgula) ");
    scanf("%f", &area1);

    printf("Qual o pib? (Use o ponto no lugar da vírgula) ");
    scanf("%f", &pib1);

    printf("Qual o numero de pontos turisticos? ");
    scanf("%d", &pontosTuristicos1);

    //Salvando os dados da segunda carta
    printf("\n|----Segunda Carta----|");

    printf("\nQual o estado da carta? (letra de A a H) ");
    scanf(" %c", &estado2);

    printf("Qual o codigo da carta? (máximo de 3 letras. Ex: A03) ");
    scanf("%s", &codigoDaCarta2);

    printf("Qual o nome da cidade? ");
    scanf("%s", &nomeDaCidade2);

    printf("Qual o tamanho população? (Deve ser numero inteiro) ");
    scanf("%d", &populacao2);

    printf("Qual a área? (Use o ponto no lugar da vírgula) ");
    scanf("%f", &area2);

    printf("Qual o pib? (Use o ponto no lugar da vírgula) ");
    scanf("%f", &pib2);

    printf("Qual o numero de pontos turisticos? ");
    scanf("%d", &pontosTuristicos2);

    //calculos
        //densidade populacional
        densidadePopulacional1 = populacao1/area1; 
        densidadePopulacional2 = populacao2/area2;
        //pib per capita
        pibPerCapita1 = pib1/populacao1;
        pibPerCapita2 = pib2/populacao2;
        //super poder
        superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + 1/densidadePopulacional1 +pibPerCapita1;
        superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + 1/densidadePopulacional2 +pibPerCapita2;


    //monstrando os dados da primeira carta no terminal
    printf("\n|----Primeira Carta----|\nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação:%lu\nArea: %.2f\nPib: %.2f\nNumero de ponto turisticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capita: %.2f", estado1, codigoDaCarta1, nomeDaCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1);

    //monstrando os dados da segunda carta no terminal
    printf("\n\n|----Segunda Carta----|\nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação:%lu\nArea: %.2f\nPib: %.2f\nNumero de ponto turisticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capita: %.2f", estado2, codigoDaCarta2, nomeDaCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);

    //monstrando a comparação entre as cartas
    printf("\n\n|----Comparação entre cartas----|");
    printf("\nPopulação: Carta %d venceu", populacao1>populacao2 ? 1 : 2);
    printf("\nÁrea: Carta %d venceu",  area1>area2 ? 1 : 2);
    printf("\nPIB: Carta %d venceu", pib1>pib2 ? 1 : 2);
    printf("\nPontos turísticos: Carta %d venceu", pontosTuristicos1>pontosTuristicos2 ? 1 : 2);
    printf("\nD. Populacional: Carta %d venceu", densidadePopulacional1<densidadePopulacional2 ? 1 : 2);
    printf("\nPIB per capita: Carta %d venceu", pibPerCapita1>pibPerCapita2 ? 1 : 2);
    printf("\nSuper Poder: Carta %d venceu", superPoder1>superPoder2 ? 1 : 2);

    return 0;
}