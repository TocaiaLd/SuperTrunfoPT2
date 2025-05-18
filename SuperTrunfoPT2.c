#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    //Caracteres
    setlocale(LC_ALL, "");


    //variaveis das cartas
    char pais1[50], pais2[50];
    char codigoDaCarta1[4], codigoDaCarta2[4];
    char nomeDaCidade1[20], nomeDaCidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2; 
    float pibPerCapita1, pibPerCapita2; 
    float superPoder1, superPoder2;
    int escolhaComparacao;
    
    //Salvando os dados da primeira carta
    printf("Bem-vindo ao Super Trunfo! Para começar, digite os dados de sua carta!\n|----Primeira Carta----|");

    printf("\nQual o pais da carta? (letra de A a H) ");
    scanf("%s", &pais1);

    printf("Qual o codigo da carta? (máximo de 3 letras. Ex: A03) ");
    scanf("%s", &codigoDaCarta1);

    printf("Qual o nome da cidade? ");
    scanf("%s", &nomeDaCidade1);

    printf("Qual o tamanho população? (Deve ser numero inteiro) ");
    scanf("%lu", &populacao1);

    printf("Qual a área? (Use o ponto no lugar da vírgula) ");
    scanf("%f", &area1);

    printf("Qual o pib? (Use o ponto no lugar da vírgula) ");
    scanf("%f", &pib1);

    printf("Qual o numero de pontos turisticos? ");
    scanf("%d", &pontosTuristicos1);

    //Salvando os dados da segunda carta
    printf("\n|----Segunda Carta----|");

    printf("\nQual o pais da carta? (letra de A a H) ");
    scanf("%s", &pais2);

    printf("Qual o codigo da carta? (máximo de 3 letras. Ex: A03) ");
    scanf("%s", &codigoDaCarta2);

    printf("Qual o nome da cidade? ");
    scanf("%s", &nomeDaCidade2);

    printf("Qual o tamanho população? (Deve ser numero inteiro) ");
    scanf("%lu", &populacao2);

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
    printf("\n|----Primeira Carta----|\nPais: %s\nCodigo: %s\nCidade: %s\nPopulação:%lu\nArea: %.2f\nPib: %.2f\nNumero de ponto turisticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capita: %.2f", pais1, codigoDaCarta1, nomeDaCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1);

    //monstrando os dados da segunda carta no terminal
    printf("\n\n|----Segunda Carta----|\nPais: %s\nCodigo: %s\nCidade: %s\nPopulação:%lu\nArea: %.2f\nPib: %.2f\nNumero de ponto turisticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capita: %.2f", pais2, codigoDaCarta2, nomeDaCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);

    //Perguntas para comparação
    printf("\n\nQual atributo voce quer comparar?");
    printf("\n1. População\n");
    printf("2. PIB\n");
    printf("3. Area\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");
    scanf("%d", &escolhaComparacao);

    printf("\n|----Comparação de Atributos----|");
    printf("\nPaises: %s e %s ", pais1, pais2);
    
    // switch para escolha de atributa para comparar
    switch(escolhaComparacao){
        case 1:
            printf("\nAtributo: População");
            printf("\nCarta 1 = %lu", populacao1);
            printf("\nCarta 2 = %lu", populacao2);

            if(populacao1>populacao2){
                printf("\nResultado: Carta 1(%s) venceu", nomeDaCidade1);

            }
            else if(populacao1<populacao2){
                printf("\nResultado: Carta 2(%s) venceu", nomeDaCidade2);

            }
            else{
                printf("\nResultado: Empate");

            }

            break;
        
        case 2:
            printf("\nAtributo: PIB");
            printf("\nCarta 1 = %.2f", pib1);
            printf("\nCarta 2 = %.2f", pib2);

            if(pib1>pib2){
                printf("\nResultado: Carta 1(%s) venceu", nomeDaCidade1);

            }
            else if(pib1<pib2){
                printf("\nResultado: Carta 2(%s) venceu", nomeDaCidade2);

            }
            else{
                printf("\nResultado: Empate");

            }            
        
            break;
            
        case 3:
            printf("\nAtributo: Area");
            printf("\nCarta 1 = %.2f", area1);
            printf("\nCarta 2 = %.2f", area2);

            if(area1>area2){
                printf("\nResultado: Carta 1(%s) venceu", nomeDaCidade1);

            }
            else if(area1<area2){
                printf("\nResultado: Carta 2(%s) venceu", nomeDaCidade2);

            }
            else{
                printf("\nResultado: Empate");
            }

            break;
        
        case 4:
            printf("\nAtributo: Pontos turisticos");
            printf("\nCarta 1 = %d", pontosTuristicos1);
            printf("\nCarta 2 = %d", pontosTuristicos2);

            if(pontosTuristicos1>pontosTuristicos2){
                printf("\nResultado: Carta 1(%s) venceu", nomeDaCidade1);

            }
            else if(pontosTuristicos1<pontosTuristicos2){
                printf("\nResultado: Carta 2(%s) venceu", nomeDaCidade2);

            }
            else{
                printf("\nResultado: Empate");

            }            
        
            break;
        
            
        case 5:
            printf("\nAtributo: Densidade populacional");
            printf("\nCarta 1 = %.2f", densidadePopulacional1);
            printf("\nCarta 2 = %.2f", densidadePopulacional1);

            if(densidadePopulacional1>densidadePopulacional2){
                printf("\nResultado: Carta 2(%s) venceu", nomeDaCidade2);

            }
            else if(densidadePopulacional1<densidadePopulacional2){
                printf("\nResultado: Carta 1(%s) venceu", nomeDaCidade1);

            }
            else{
                printf("\nResultado: Empate");

            } 

            break;
        
        case 6:
            printf("\nAtributo: PIB per capita");
            printf("\nCarta 1 = %.2f", pibPerCapita1);
            printf("\nCarta 2 = %.2f", pibPerCapita2);

            if(pibPerCapita1>pibPerCapita2){
                printf("\nResultado: Carta 1(%s) venceu", nomeDaCidade1);

            }
            else if(pibPerCapita1<pibPerCapita2){
                printf("\nResultado: Carta 2(%s) venceu", nomeDaCidade2);

            }
            else{
                printf("\nResultado: Empate");

            }             
        
            break;
        case 7:
            printf("\nAtributo: Superpoder");
            printf("\nCarta 1 = %.2f", superPoder1);
            printf("\nCarta 2 = %.2f", superPoder2);

            if(superPoder1>superPoder2){
                printf("\nResultado: Carta 1(%s) venceu", nomeDaCidade1);

            }
            else if(superPoder1<superPoder2){
                printf("\nResultado: Carta 2(%s) venceu", nomeDaCidade2);

            }
            else{
                printf("\nResultado: Empate");

            }             
        
            break;
        
        default:
            printf("erro");
    }

    return 0;
}