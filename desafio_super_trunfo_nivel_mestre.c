#include <stdio.h>
#include <string.h>
# include <stdlib.h>
# include <time.h>

//Super Trunfo Aventureiro, comparando dois paises.
//Definição de variáveis.

int main(){
//carta 1.
    char pais1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densipop1;
    float pibpercapita1;
    char pais2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densipop2;
    float pibpercapita2;
    int comparador1;
    int comparador2;
    int resultado;
    int somatotal1;
    int somatotal2;
    int soma1;
    int soma2;
    int soma3;
    int soma4;

//Início do programa.
    printf ("#### SUPER TRUNFO ####\n");
    printf ("Antes de começãr, você irá cadastrar duas cartas.\n");
    printf ("Cada carta representa um país, e você irá comparar dois atributos destes país.\n");
    printf ("O país que tiver o maior valor em cada atributo, ganha a rodada. A única exceção é na Densidade Demográfica, ganha o menor valor!\n");
    printf ("Vamos começar!\n\n");

//Código para registro da carta 1.
    printf ("Registro da Carta 1:\n");

    printf ("Informe um País. ");
    scanf (" %[^\n]", pais1);
    fflush (stdin);

    printf ("Qual a população do país escolhido - %s? ", pais1);
    (scanf ("%d", &populacao1) == 1);
    fflush (stdin);

    printf ("Qual a área em km² do país que você escolheu - %s? ", pais1);
    (scanf ("%f", &area1) == 1);
    fflush (stdin);

    printf ("Qual o PIB do país escolhido - %s? ", pais1);
    (scanf ("%f", &pib1) == 1);
    fflush (stdin);

    printf ("Quantos pontos turísticos existem no país que você escolheu - %s? ", pais1);
    scanf ("%d", &pontos1);
    fflush (stdin);

//Cálculo da densidade populacional e do PIB per capita da primeira carta.    
    densipop1 = populacao1 / area1;
// * 1000000000 para converter o PIB de bilhões para reais.
    pibpercapita1 = pib1 * 1000000000 / populacao1;

//Código para registro da carta 2.
    printf ("Registro da Carta 2:\n");

    printf ("Informe um País. ");
    scanf (" %[^\n]", pais2);
    fflush (stdin);

    printf ("Qual a população do país escolhido - %s? ", pais2);
    (scanf ("%d", &populacao2) == 1);
    fflush (stdin);

    printf ("Qual a área em km² do país que você escolheu - %s? ", pais2);
    (scanf ("%f", &area2) == 1);
    fflush (stdin);

    printf ("Qual o PIB do país escolhido - %s? ", pais2);
    (scanf ("%f", &pib2) == 1);
    fflush (stdin);

    printf ("Quantos pontos turísticos existem no país que você escolheu - %s? ", pais2);
    scanf ("%d", &pontos2);
    fflush (stdin);

//Cálculo da densidade populacional e do PIB per capita da segunda carta.
    densipop2 = populacao2 / area2;
// * 1000000000 para converter o PIB de bilhões para reais.
    pibpercapita2 = pib2 * 1000000000 / populacao2;

//Escolha de dois atributo para comparar entre as duas cartas.
    printf ("Agora que você cadastrou as duas cartas, é hora de escolher dois atributos para comparação!\n");
    printf ("1 - População\n");
    printf ("2 - Área\n");
    printf ("3 - PIB\n");
    printf ("4 - Número de pontos turísticos\n");
    printf ("5 - Densidade populacional\n");
    printf ("6 - PIB per capita\n");
    printf ("Escolha o primeiro atributo para comparação (digite o número correspondente): ");
    scanf ("%d", &comparador1);


//Comparação dos atributos escolhidos opção 1.
     switch (comparador1)
    {
    case 1:
   
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Números de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        break;

        case 2:
        printf("1 - População\n");
        printf("3 - PIB\n");
        printf("4 - Números de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        break;

        case 3:
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("4 - Números de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        break;

        case 4:
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        break;

        case 5:
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Números de Pontos Turísticos\n");
        printf("6 - PIB per Capita\n");
        break;

        case 6:
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Números de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        break;
    
    default: {printf("Opção inválida");}
        break;
    }

//Opção de escolha do segundo atributo a ser comparado.
    printf("Escolha o Segundo atributo a ser comparado ");
    scanf("%d", &comparador2);

//Leitura caso o usuário digite números iguais nos 2 atributos.

    if (comparador1 == comparador2)
    {
        printf("Não pode escolher 2 atributos iguais");

        return 0;
    }
    

//Bloco que apresenta as informações correspondentes a primeiro atributo - soma dos atributos.
    switch (comparador1)
    {
    case 1:

    
        printf("Primeiro atributo escolhido para comparação: População\n\n");

        printf("A População da Carta 1: %s é: %d\n", pais1, populacao1);
        printf("A População da Carta 2: %s é: %d\n\n", pais2, populacao2);

        soma1 = populacao1;
        soma2 = populacao2;
    break;

        
    {
    case 2:
    
        printf("Primeiro atributo escolhido para comparação: Área \n\n");

        printf("A Área da Carta 1: %s é: %.2f\n", pais1, area1);
        printf("A Área da Carta 2: %s é: %.2f\n\n", pais2, area2);

        soma1 = area1;
        soma2 = area2;
    break;
        
    }

    {
    case 3:
    
        printf("Primeiro atributo escolhido para comparação:\n\n");

        printf("O PIB da Carta 1: %s é: %.2f\n", pais1, pib1);
        printf("O PIB da Carta 2: %s é: %.2f\n\n", pais2, pib2);

        soma1 = pib1;
        soma2 = pib2;
    break;
            
    }
        
    {
    case 4:
   
        printf("Primeiro atributo escolhido para comparação: Número de pontos turísticos\n\n");

        printf("O Número de pontos turístico da Carta 1: %s é: %d\n", pais1, pontos1);
        printf("O Número de pontos turístico da Carta 2: %s é: %d\n\n", pais1, pontos2);

        soma1 = pontos1;
        soma2 = pontos2;
    break;
                
    }

    {
    case 5:
   
        printf("Primeiro atributo escolhido para comparação: Densidade Populacional\n\n");

        printf("A Densidade Populacional da Carta 1: %s é: %.2f\n", pais1, densipop1);
        printf("A Densidade Populacional da Carta 2: %s é: %.2f\n\n", pais2, densipop2);

        soma1 = densipop1;
        soma2 = densipop2;
    break;
                
    }

    {
    case 6:
    
        printf("Primeiro atributo escolhido para comparação: PIB per Capita)\n\n");

        printf("O PIB per Capita da Carta 1: %s é: %.2f\n", pais1, pibpercapita1);
        printf("O PIB per Capita da Carta 2: %s é: %.2f\n\n", pais2, pibpercapita2);

        soma1 = pibpercapita1;
        soma2 = pibpercapita2;
    break;
                
    }

    default:{printf("Opção inválida!!!");}

    break;
    
    }


//Bloco que apresenta as informações correspondentes o Segundo atributo - soma dos atributos.
    switch (comparador2)
    {
    case 1:

        printf("Segundo atributo escolhido para comparação: População\n\n");

        printf("A População da Carta 1: %s é: %d\n", pais1, populacao1);
        printf("A População da Carta 2: %s é: %d\n\n", pais2, populacao2);

        soma3 = populacao1;
        soma4 = populacao2;
    break;

    {
    case 2:
    
        printf("Segundo atributo escolhido para comparação: Área \n\n");

        printf("A Área da Carta 1: %s é: %.2f\n", pais1, area1);
        printf("A Área da Carta 2: %s é: %.2f\n\n", pais2, area2);

        soma3 = area1;
        soma4 = area2;
    break; 
    }

    {
    case 3:
   
        printf("Segundo atributo escolhido para comparação:\n\n");

        printf("O PIB da Carta 1: %s é: %.2f\n", pais1, pib1);
        printf("O PIB da Carta 2: %s é: %.2f\n\n", pais2, pib2);

        soma3 = pib1;
        soma4 = pib2;
    break;     
    }
        
    {
    case 4:
    
        printf("Segundo atributo escolhido para comparação: Número de pontos turísticos\n\n");

        printf("O Número de pontos turístico da Carta 1: %s é: %d\n", pais1, pontos1);
        printf("O Número de pontos turístico da Carta 2: %s é: %d\n\n", pais2, pontos2);

        soma3 = pontos1;
        soma4 = pontos2;
    break;        
    }

    {
    case 5:
   
        printf("Segundo atributo escolhido para comparação: Densidade Populacional\n\n");

        printf("A Densidade Populacional da Carta 1: %s é: %.2f\n", pais1, densipop1);
        printf("A Densidade Populacional da Carta 2: %s é: %.2f\n\n", pais2, densipop2);

        soma3 = densipop1;
        soma4 = densipop2;
    break;           
    }

    {
    case 6:
   
        printf("Segundo atributo escolhido para comparação: PIB per Capita)\n\n");

        printf("O PIB per Capita da Carta 1: %s é: %.2f\n", pais1, pibpercapita1);
        printf("O PIB per Capita da Carta 2: %s é: %.2f\n\n", pais2, pibpercapita2);

        soma3 = pibpercapita1;
        soma4 = pibpercapita2;
    break;         
    }

    
    default:{printf("Opção inválida!!!");}

    break;
    }

    //Calculo das somas dos atributos da carta 1 e carta 2.
        somatotal1 = soma1 + soma3;
        somatotal2 = soma2 + soma4;

        printf("O valor total de atributos da carta 1 é: %d\n", somatotal1);
        printf("O valor total de atributos da carta 2 é: %d\n", somatotal2);

    //Tratamento caso a soma dos atributos seja igual (Empate) e determinação de qual carta é a vencedora.

    resultado = somatotal1 > somatotal2 ? 1:0;

    if (somatotal1 == somatotal2){
        
    printf("O jogo Empatou!!!!!");
           
    } else if(resultado == 1){

     printf("Carta 1: %s Venceu!!!\n", pais1);

    }else{ printf("Carta 2: %s Venceu!!!!\n", pais2);}

    return 0;
        
}