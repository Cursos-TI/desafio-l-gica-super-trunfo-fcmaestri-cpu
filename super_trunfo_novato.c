#include <stdio.h>
#include <string.h>

//Super Trunfo - Duas cartas com dados de cidades brasileiras.
//Definição de variáveis.

int main(){

    char estado[4];
    char codigo[4];
    char cidade[40];
    float populacao;
    float area;
    float pib;
    int pontos;
    float densipop;
    int pibpercapita;
    char estado2[4];
    char codigo2[4];
    char cidade2[40];
    float populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densipop2;
    int pibpercapita2;
    printf ("SUPER TRUNFO\n");

//Código para carta 1.
    printf ("Carta 1:\n");
    printf ("Escolha uma letra de A até H para representar seu estado: ");
    scanf ("%s", estado);
    fflush (stdin);

    printf ("Código da carta - selecione um número de 1 até 4: ");
    scanf ("%s", codigo);
    fflush (stdin); 

    printf ("Informe uma Cidade que pertence ao Estado escolhido: ");
    scanf (" %[^\n]", cidade);
    fflush (stdin);

    printf ("Qual a população da cidade de %s? ", cidade);
    (scanf ("%f", &populacao) == 1);
    fflush (stdin);

    printf ("Qual a área em km² da cidade de %s? ", cidade);
    (scanf ("%f", &area) == 1);
    fflush (stdin);

    printf ("Qual o PIB de %s? ", cidade);
    (scanf ("%f", &pib) == 1);
    fflush (stdin);

    printf ("Quantos pontos turísticos existem em %s? ", cidade);
    scanf ("%d", &pontos);
    fflush (stdin);

//Cálculo da densidade populacional e do PIB per capita da primeira carta.    
    densipop = populacao / area;
// * 1000000000 para converter o PIB de bilhões para reais.
    pibpercapita = pib * 1000000000 / populacao;

//Código para carta 2.

    printf ("Carta 2:\n");

    printf ("Escolha uma letra de A até H para representar seu estado: ");
    scanf ("%s", estado2);
    fflush (stdin);

    printf ("Código da carta - selecione um número de 1 até 4: ");
    scanf ("%s", codigo2);
    fflush (stdin);

    printf ("Informe uma Cidade que pertence ao Estado escolhido: ");
    scanf (" %[^\n]", cidade2);
    fflush (stdin);

    printf ("Qual a população da cidade de %s? ", cidade2);
    (scanf ("%f", &populacao2) == 1);
    fflush (stdin);

    printf ("Qual a área em km² da cidade de %s? ", cidade2);
    (scanf ("%f", &area2) == 1);
    fflush (stdin);

    printf ("Qual o PIB de %s? ", cidade2);
    (scanf ("%f", &pib2) == 1);
    fflush (stdin);

    printf ("Quantos pontos turísticos existem em %s? ", cidade2);
    scanf ("%d", &pontos2);
    fflush (stdin);

//Cálculo da densidade populacional e do PIB per capita da segunda carta.
    densipop2 = populacao2 / area2;
// * 1000000000 para converter o PIB de bilhões para reais.
    pibpercapita2 = pib2 * 1000000000 / populacao2;

//Leitura das duas cartas.

    printf ("Carta 1:\n");
    printf ("Estado: %s\n", estado);
    printf ("Código: %s0%s\n", estado, codigo);
    printf ("Nome da cidade: %s\n", cidade);
    printf ("População: %.3f\n", populacao);
    printf ("Área: %.2fkm²\n", area);
    printf ("PIB: %.2f bilhões de reais\n", pib);
    printf ("Número de pontos turísticos: %d\n", pontos);
    printf ("Densidade populacional: %.2f habitantes por km²\n", densipop);
    printf ("PIB per capita: %d reais\n\n", pibpercapita);


    printf ("Carta 2:\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s0%s\n", estado2, codigo2);
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("População: %.3f\n", populacao2);
    printf ("Área: %.2fkm²\n", area2);
    printf ("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Número de pontos turísticos: %d\n", pontos2);
    printf ("Densidade populacional: %.2f habitantes por km²\n", densipop2);
    printf ("PIB per capita: %d reais\n\n", pibpercapita2);

//Código para comparação das cartas em modo de leitura

//Comparando a População das cidades.
    if (populacao > populacao2){
        printf("A população de %s é de %.2f sendo maior que %s, cuja população tem %.2f. %s ganhou. Parabéns!\n", cidade, populacao, cidade2, populacao2, cidade);
    } else {
        if (populacao < populacao2){
            printf("A população de %s com o valor de %.2f é menor que %s, cujo valor é %.2f. %s ganhou! Parabéns!\n", cidade, populacao, cidade2, populacao2, cidade2);
        } else {
            printf(" Empate! As populações de %s e %s são iguais, cujos valores são %.2f e %.2f.\n", cidade, cidade2, populacao, populacao2);
        }
    }

//Comparando a Área das cidades.
    if (area > area2){
        printf("A área de %s mede %.2fkm² sendo maior que %s que tem área de %.2fkm². %s ganhou! Parabéns!\n", cidade, area, cidade2, area2, cidade);
    } else {
        if (area < area2){
            printf("A área de %s mede %.fkm² sendo menor que %s que tem área de %.2fkm². %s ganhou! Parabéns!\n", cidade, area, cidade2, area2, cidade2);
        } else {
            printf("Empate! As áreas de %s e %s são iguais, com valores respectivos de %.2fkm² e %.2fkm².\n", cidade, cidade2, area, area2);
        }
    }

//Comparando o PIB das cidades.
    if (pib > pib2){
        printf("O PIB de %s é igual a %.2f sendo maior que %s com valor igual a %.2f. %s ganhou! Parabéns!\n", cidade, pib, cidade2, pib2, cidade);
    } else {
        if (pib < pib2){
            printf("O PIB de %s é igual a %.2f sendo menor que %s com valor igual a %.2f. %s ganhou! Parabéns!\n", cidade, pib, cidade2, pib2, cidade2);
        } else {
            printf("Empate! O PIB de %s e %s são iguais, com valores respectivos a %.2f e %.2f.\n", cidade, cidade2, pib, pib2);
        }
    }

//Comparando o número de pontos turísticos das cidades.    
    if (pontos > pontos2){
        printf("O número de pontos turísticos de %s é de %d sendo maior que %s que tem apenas %d. %s ganhou! Parebéns!\n", cidade, pontos, cidade2, pontos2, cidade);
    } else {
        if (pontos < pontos2){
            printf("O número de pontos turísticos de %s tem valor de %d é menor que %s que tem %d. %s ganhou! Parabéns!\n", cidade, pontos, cidade2, pontos2, cidade2);
        } else {
            printf("Empate! O número de pontos turísticos de %s e %s são iguais, com valores repectivos de %d e %d.\n", cidade, cidade2, pontos, pontos2);
        }
    }

//Comparando a densidade populacional das cidades.
    if (densipop > densipop2){
        printf("A densidade populacional de %s com valor %.2f é maior que %s que tem apenas %.2f. %s ganhou! Parabéns!\n", cidade, densipop, cidade2, densipop2, cidade);
    } else {
        if (densipop < densipop2){
            printf("A densidade populacional de %s com valor de %.2f é menor que %s com valor de %.2f. %s ganhou! Parabéns!\n", cidade, densipop, cidade2, densipop2, cidade2);
        } else {
            printf("Empate! A densidade populacional de %s e %s são iguais, com valores respectivos de %.2f e %.2f.\n", cidade, cidade2, densipop, densipop2);
        }
    }

//Comparando o PIB per capita das cidades.
    if (pibpercapita > pibpercapita2){
        printf("O PIB per capita de %s com valor %d é maior que %s que tem apenas %d. %s ganhou! Parabéns!\n", cidade, pibpercapita, cidade2, pibpercapita2, cidade);
    } else {
        if (pibpercapita < pibpercapita2){
            printf("O PIB per capita de %s com valor %d é menor que %s tendo %d. %s ganhou! Parabéns\n", cidade, pibpercapita, cidade2, pibpercapita2, cidade2);
        } else {
            printf("Empate! O PIB per capita de %s e %s são iguais, com valores respectivos de %d e %d.\n", cidade, cidade2, pibpercapita, pibpercapita2);
        }
    }

//Comparando cartas modo rápido de visualização.
    printf ("\nComparação rápida entre as cartas:\n");
    printf ("Carta 1: %s0%s - %s\n", estado, codigo, cidade);
    printf ("População: %.3f | Área: %.2fkm² | PIB: %.2f bilhões de reais | Pontos turísticos: %d | Densidade populacional: %.2f hab/km² | PIB per capita: %d reais\n", populacao, area, pib, pontos, densipop, pibpercapita);
    printf ("Carta 2: %s0%s - %s\n", estado2, codigo2, cidade2);
    printf ("População: %.3f | Área: %.2fkm² | PIB: %.2f bilhões de reais | Pontos turísticos: %d | Densidade populacional: %.2f hab/km² | PIB per capita: %d reais\n\n", populacao2, area2, pib2, pontos2, densipop2, pibpercapita2);


//qual carta ganha
//Comparando a População das cidades.
    if (populacao > populacao2){
        printf("Carta 1, População - %s: %.2f\nCarta 2, População - %s: %.2f.\nCarta 1 GANHOU (%s). Parabéns!\n", cidade, populacao, cidade2, populacao2, cidade);
    } else {
        if (populacao < populacao2){
            printf("Carta 1, População - %s: %.2f\nCarta 2, População - %s: %.2f.\nCarta 2 GANHOU (%s). Parabéns!\n", cidade, populacao, cidade2, populacao2, cidade2);
        } else {
            printf("Carta 1, População - %s: %.2f\nCarta 2, População - %s: %.2f.\nEmpataram!\n \n", cidade, populacao, cidade2, populacao2);
        }
    }

//Comparando a Área das cidades.
    if (area > area2){
        printf("Carta 1, Área - %s: %.2fkm²\nCarta 2, Área - %s: %.2fkm².\nCarta 1 GANHOU (%s). Parabéns!\n", cidade, area, cidade2, area2, cidade);
    } else {
        if (area < area2){
            printf("Carta 1, Área - %s: %.fkm²\nCarta 2, Área - %s: %.2fkm².\nCarta 2 GANHOU (%s). ganhou! Parabéns!\n", cidade, area, cidade2, area2, cidade2);
        } else {
            printf("Carta 1, Área - %s: %.2fkm²\nCarta 2, Área - %s: %.2fkm².\nEmpataram.\n \n", cidade, area, cidade2, area2);
        }
    }

//Comparando o PIB das cidades.
    if (pib > pib2){
        printf("Carta 1, PIB - %s: %.2f\nCarta 2, PIB - %s: %.2f.\nCarta 1 GANHOU (%s). Parabéns!\n", cidade, pib, cidade2, pib2, cidade);
    } else {
        if (pib < pib2){
            printf("Carta 1, PIB - %s: %.2f\n Carta 2, PIB - %s: %.2f.\nCarta 2 GANHOU (%s). ganhou! Parabéns!\n", cidade, pib, cidade2, pib2, cidade2);
        } else {
            printf("Carta 1, PIB - %s: %.2f\n Carta 2, PIB - %s: %.2f.\nEmpataram.\n \n", cidade, pib, cidade2, pib2);
        }
    }

//Comparando o número de pontos turísticos das cidades.    
    if (pontos > pontos2){
        printf("Carta 1, Pontos Turísticos - %s: %d\nCarta 2, Pontos Turísticos - %s: %d.\nCarta 1 GANHOU (%s). Parabéns!\n", cidade, pontos, cidade2, pontos2, cidade);
    } else {
        if (pontos < pontos2){
            printf("Carta 1, Pontos Turísticos - %s: %d\nCarta 2, Pontos Turísticos - %s: %d.\nCarta B GANHOU (%s). ganhou! Parabéns!\n", cidade, pontos, cidade2, pontos2, cidade2);
        } else {
            printf("Carta 1, Pontos Turísticos - %s: %d\nCarta 2, Pontos Turísticos - %s: %d.\nEmpataram.\n \n", cidade, pontos, cidade2, pontos2);
        }
    }

//Comparando a densidade populacional das cidades.
    if (densipop > densipop2){
        printf("Carta 1, Densidsde Populacional - %s: %.2f\nCarta 2, Densidade Populacional - %s: %.2f.\nCarta 1 GANHOU (%s). Parabéns!\n", cidade, densipop, cidade2, densipop2, cidade);
    } else {
        if (densipop < densipop2){
            printf("Carta 1, Densidade Populacional - %s: %.2f\nCarta 2, Densidade Populacional - %s: %.2f.\nCarta 2 GANHOU (%s). Parabéns!\n", cidade, densipop, cidade2, densipop2, cidade2);
        } else {
            printf("Carta 1, Densidade Populacional - %s: %.2f\nCarta 2, Densidade Populacional - %s: %.2f.\nEmpataram!\n \n", cidade, densipop, cidade2, densipop2);
        }
    }

//Comparando o PIB per capita das cidades.
    if (pibpercapita > pibpercapita2){
        printf("Carta 1, PIB per capita - %s: %d\nCarta 2, PIB per capita - %s: %d.\nCarta 1 GANHOU (%s). Parabéns!\n", cidade, pibpercapita, cidade2, pibpercapita2, cidade);
    } else {
        if (pibpercapita < pibpercapita2){
            printf("Carta A, PIB per capita - %s: %d\nCarta 2, PIB per capita - %s: %d.\nCarta 2 GANHOU (%s). ganhou! Parabéns!\n", cidade, pibpercapita, cidade2, pibpercapita2, cidade2);
        } else {
            printf("Carta 1, PIB per capita - %s: %d\nCarta 2, PIB per capita - %s: %d.\nEmpataram\n", cidade, pibpercapita, cidade2, pibpercapita2);
        }
    }
return 0;
}