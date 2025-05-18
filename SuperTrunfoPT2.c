// NÃO SEI PQ O CODIGO DEVE USAR O SWITCH PARA FAZER O MENU DINAMICO, POR ISSO FIZ COM IF, MAS DEIXEI O 
//SWITCH COMENTADO PARA PROVAR QUE FIZ, SE HOUVER OUTRO JEITO DE FAZER COM SWITCH, POR FAVOR ME FAÇA UM 
//FEEDBACK (LINHA 119)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    //Caracteres
    setlocale(LC_ALL, "");

    //Dados das cartas
    //pais
    char pais1[50] = "Brasil";
    char pais2[50] = "Argentina";
    //codigo
    char codigoDaCarta1[4] = "A02";
    char codigoDaCarta2[4] = "A03";
    //cidade
    char nomeDaCidade1[20] = "São Paulo";
    char nomeDaCidade2[20] = "Buenos Aires";
    //população
    unsigned long int populacao1 = 1000000000;
    unsigned long int populacao2 = 500000000;
    //area
    float area1 = 24534.532;
    float area2 = 24534.532;
    //pib 
    float pib1 = 10000000000;
    float pib2 = 56000000000;
    //pontos turisticos
    int pontosTuristicos1 = 42352;
    int pontosTuristicos2 = 235465;
    //respostas para if ternario
    char vitoria1[30] = "Resultado: Carta 1 venceu"; 
    char vitoria2[30] = "Resultado: Carta 2 venceu";
    char empate[30] = "Resultado: Empate";

    //variaveis a serem calculadas
    float densidadePopulacional1, densidadePopulacional2 ; 
    float pibPerCapita1, pibPerCapita2; 
    float superPoder1, superPoder2;
    int escolhaComparacao, escolhaComparacao2;
    float comparacaoSoma1, comparacaoSoma2; 
    
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

    //Inicar
    printf("Bem-vindo ao comparador de cartas! Aperte ENTER para mostrar os dados das duas cartas para que assim você possa inciar a comparação\n");
    getchar();


    //monstrando os dados da primeira carta no terminal
    printf("\n|----Primeira Carta----|\nPais: %s\nCodigo: %s\nCidade: %s\nPopulação:%lu\nArea: %.2f\nPib: %.2f\nNumero de ponto turisticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capita: %.2f", pais1, codigoDaCarta1, nomeDaCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1);

    //dados da proxima carta
    printf("\n\nAperte ENTER para mostrar os dados da proxima cartas\n");
    getchar();

    //monstrando os dados da segunda carta no terminal
    printf("\n|----Segunda Carta----|\nPais: %s\nCodigo: %s\nCidade: %s\nPopulação:%lu\nArea: %.2f\nPib: %.2f\nNumero de ponto turisticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capita: %.2f", pais2, codigoDaCarta2, nomeDaCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);

    //Menu de comparação
    printf("\n\nAperte ENTER para ver as possiveis comparações");
    getchar();




    //Perguntas para comparação 1
    printf("\n\nQual o primeiro atributo a ser comparado?");
    printf("\n1. População\n");
    printf("2. PIB\n");
    printf("3. Area\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");
    scanf("%d", &escolhaComparacao);

    //Perguntas para comparação 2
    printf("\n\nQual o segundo atributo a ser comparado?\n");
    
    // Menu dinamico
    if(escolhaComparacao != 1){
        printf("1. População\n");
    }
    if(escolhaComparacao != 2){
        printf("2. PIB\n");
    }
    if(escolhaComparacao != 3){
        printf("3. Area\n");
    }
    if(escolhaComparacao != 4){
        printf("4. Pontos turisticos\n");
    }
    if(escolhaComparacao != 5){
        printf("5. Densidade populacional\n");
    }
    if(escolhaComparacao != 6){
        printf("6. PIB per Capita\n");
    }
    if(escolhaComparacao != 7){
        printf("7. Superpoder\n");
    }
    scanf("%d", &escolhaComparacao2);
    
    //SWITCH MTO DESNECESSARIO
    // switch (escolhaComparacao) {
    // case 1:
    // //     // não mostrar 1 (População)
    // //     printf("2. PIB\n");
    // //     printf("3. Área\n");
    // //     printf("4. Pontos turísticos\n");
    // //     printf("5. Densidade populacional\n");
    // //     printf("6. PIB per Capita\n");
    // //     printf("7. Superpoder\n");
    // //     break;
    // // case 2:
    // //     printf("1. População\n");
    // //     // não mostrar 2
    // //     printf("3. Área\n");
    // //     printf("4. Pontos turísticos\n");
    // //     printf("5. Densidade populacional\n");
    // //     printf("6. PIB per Capita\n");
    // //     printf("7. Superpoder\n");
    // //     break;
    // // case 3:
    // //     printf("1. População\n");
    // //     printf("2. PIB\n");
    // //     // não mostrar 3
    // //     printf("4. Pontos turísticos\n");
    // //     printf("5. Densidade populacional\n");
    // //     printf("6. PIB per Capita\n");
    // //     printf("7. Superpoder\n");
    // //     break;
    // // case 4:
    // //     printf("1. População\n");
    // //     printf("2. PIB\n");
    // //     printf("3. Área\n");
    // //     // não mostrar 4
    // //     printf("5. Densidade populacional\n");
    // //     printf("6. PIB per Capita\n");
    // //     printf("7. Superpoder\n");
    // //     break;
    // // case 5:
    // //     printf("1. População\n");
    // //     printf("2. PIB\n");
    // //     printf("3. Área\n");
    // //     printf("4. Pontos turísticos\n");
    // //     // não mostrar 5
    // //     printf("6. PIB per Capita\n");
    // //     printf("7. Superpoder\n");
    // //     break;
    // // case 6:
    // //     printf("1. População\n");
    // //     printf("2. PIB\n");
    // //     printf("3. Área\n");
    // //     printf("4. Pontos turísticos\n");
    // //     printf("5. Densidade populacional\n");
    // //     // não mostrar 6
    // //     printf("7. Superpoder\n");
    // //     break;
    // // case 7:
    // //     printf("1. População\n");
    // //     printf("2. PIB\n");
    // //     printf("3. Área\n");
    // //     printf("4. Pontos turísticos\n");
    // //     printf("5. Densidade populacional\n");
    // //     printf("6. PIB per Capita\n");
    // //     // não mostrar 7
    // //     break;
    // // }

    //Evitar comparações iguais
    if(escolhaComparacao == escolhaComparacao2){
        printf("\nPor favor redigite um valor, pois não se pode comparar os mesmos atributos!\n");
        scanf("%d", &escolhaComparacao2);
    }

    printf("\n\n|---------Comparação de Atributos---------|");
    printf("\nPaises: %s e %s ", pais1, pais2);
    
    // switch para escolha de atributo para comparar
    switch(escolhaComparacao){
        case 1:
            //comparação final
            comparacaoSoma1 += populacao1;
            comparacaoSoma2 += populacao2;
        
            printf("\n|---Atributo: População---|");
            printf("\nCarta 1 = %lu", populacao1);
            printf("\nCarta 2 = %lu\n", populacao2);

            printf((populacao1 != populacao2) ? (populacao1>populacao2 ? vitoria1 : vitoria2) : empate);
                break;
        
        case 2:
            //comparação final
            comparacaoSoma1 += pib1;
            comparacaoSoma2 += pib2;

            printf("\n|---Atributo: PIB---|");
            printf("\nCarta 1 = %.2f", pib1);
            printf("\nCarta 2 = %.2f\n", pib2);

            printf((pib1 != pib2) ? (pib1>pib2 ? vitoria1 : vitoria2) : empate);

            break;
            
        case 3:
            //comparação final
            comparacaoSoma1 += area1;
            comparacaoSoma2 += area2;

            printf("\n|---Atributo: Area---|");
            printf("\nCarta 1 = %.2f", area1);
            printf("\nCarta 2 = %.2f\n", area2);

            printf((area1!=area2) ? (area1>area2 ? vitoria1 : vitoria2) : empate);

            break;
        
        case 4:
        
            //comparação final
            comparacaoSoma1 += pontosTuristicos1;
            comparacaoSoma2 += pontosTuristicos2;

            printf("\n|---Atributo: Pontos turísticos---|");
            printf("\nCarta 1 = %d", pontosTuristicos1);
            printf("\nCarta 2 = %d", pontosTuristicos2);

            printf((pontosTuristicos1 != pontosTuristicos2) ? (pontosTuristicos1>pontosTuristicos2 ? vitoria1 : vitoria2) : empate);
           
        
            break;
        
            
        case 5:
            //comparação final
            comparacaoSoma1 += 1/densidadePopulacional1;
            comparacaoSoma2 += 1/densidadePopulacional2;

            printf("\n|---Atributo: Densidade Populacional---|");
            printf("\nCarta 1 = %.2f", densidadePopulacional1);
            printf("\nCarta 2 = %.2f", densidadePopulacional1);

            printf((densidadePopulacional1 != densidadePopulacional1) ? (pib1>pib2 ? vitoria2 : vitoria1) : empate);
          


            break;
        
        case 6:
            //comparação final
            comparacaoSoma1 += pibPerCapita1;
            comparacaoSoma2 += pibPerCapita2;

            printf("\n|---Atributo: PIB per capita---|");
            printf("\nCarta 1 = %.2f", pibPerCapita1);
            printf("\nCarta 2 = %.2f", pibPerCapita2);

            printf((pibPerCapita1 != pibPerCapita2) ? (pibPerCapita1>pibPerCapita2 ? vitoria1 : vitoria2) : empate);
           
        

            break;
        case 7:
            //comparação final
            comparacaoSoma1 += superPoder1;
            comparacaoSoma2 += superPoder2;
            printf("\n|---Atributo: Super Poder---|");
            printf("\nCarta 1 = %.2f", superPoder1);
            printf("\nCarta 2 = %.2f", superPoder2);

            printf((superPoder1 != superPoder2) ? (superPoder1>superPoder2 ? vitoria1 : vitoria2) : empate);
       
        
            break;
        
        default:
            printf("erro");
    }

        // switch para escolha de atributo para comparar
    switch(escolhaComparacao2){
        case 1:
            //comparação final
            comparacaoSoma1 += populacao1;
            comparacaoSoma2 += populacao2;
        
            printf("\n|---Atributo: População---|");
            printf("\nCarta 1 = %lu", populacao1);
            printf("\nCarta 2 = %lu\n", populacao2);

            printf((populacao1 != populacao2) ? (populacao1>populacao2 ? vitoria1 : vitoria2) : empate);
                break;
        
        case 2:
            //comparação final
            comparacaoSoma1 += pib1;
            comparacaoSoma2 += pib2;

            printf("\n|---Atributo: PIB---|");
            printf("\nCarta 1 = %.2f", pib1);
            printf("\nCarta 2 = %.2f\n", pib2);

            printf((pib1 != pib2) ? (pib1>pib2 ? vitoria1 : vitoria2) : empate);

            break;
            
        case 3:
            //comparação final
            comparacaoSoma1 += area1;
            comparacaoSoma2 += area2;

            printf("\n|---Atributo: Area---|");
            printf("\nCarta 1 = %.2f", area1);
            printf("\nCarta 2 = %.2f\n", area2);

            printf((area1!=area2) ? (area1>area2 ? vitoria1 : vitoria2) : empate);

            break;
        
        case 4:
        
            //comparação final
            comparacaoSoma1 += pontosTuristicos1;
            comparacaoSoma2 += pontosTuristicos2;

            printf("\n|---Atributo: Pontos turísticos---|");
            printf("\nCarta 1 = %d", pontosTuristicos1);
            printf("\nCarta 2 = %d", pontosTuristicos2);

            printf((pontosTuristicos1 != pontosTuristicos2) ? (pontosTuristicos1>pontosTuristicos2 ? vitoria1 : vitoria2) : empate);
           
        
            break;
        
            
        case 5:
            //comparação final
            comparacaoSoma1 += 1/densidadePopulacional1;
            comparacaoSoma2 += 1/densidadePopulacional2;

            printf("\n|---Atributo: Densidade Populacional---|");
            printf("\nCarta 1 = %.2f", densidadePopulacional1);
            printf("\nCarta 2 = %.2f", densidadePopulacional1);

            printf((densidadePopulacional1 != densidadePopulacional1) ? (pib1>pib2 ? vitoria2 : vitoria1) : empate);
          


            break;
        
        case 6:
            //comparação final
            comparacaoSoma1 += pibPerCapita1;
            comparacaoSoma2 += pibPerCapita2;

            printf("\n|---Atributo: PIB per capita---|");
            printf("\nCarta 1 = %.2f", pibPerCapita1);
            printf("\nCarta 2 = %.2f", pibPerCapita2);

            printf((pibPerCapita1 != pibPerCapita2) ? (pibPerCapita1>pibPerCapita2 ? vitoria1 : vitoria2) : empate);
           
        

            break;
        case 7:
            //comparação final
            comparacaoSoma1 += superPoder1;
            comparacaoSoma2 += superPoder2;
            printf("\n|---Atributo: Super Poder---|");
            printf("\nCarta 1 = %.2f", superPoder1);
            printf("\nCarta 2 = %.2f", superPoder2);

            printf((superPoder1 != superPoder2) ? (superPoder1>superPoder2 ? vitoria1 : vitoria2) : empate);
       
        
            break;
        
        default:
            printf("erro");
    }

    
    printf("\n|---Soma dos atributos---|");
    printf("\nSoma da Carta 1: %.2f", comparacaoSoma1);
    printf("\nSoma da Carta 2: %.2f", comparacaoSoma2);
    if(comparacaoSoma1>comparacaoSoma2){
        printf("\nResultado: A carta 1(%s) venceu a rodada!", nomeDaCidade1);
    }else if(comparacaoSoma1<comparacaoSoma2){
        printf("\nResultado: A carta 2(%s) venceu a rodada!", nomeDaCidade2);
    }else{
        printf("\nResultado: Empate!");
    }

    return 0;
}