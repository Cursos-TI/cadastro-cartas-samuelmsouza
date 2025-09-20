#include <stdio.h>
#include <string.h>// para funcionar corretamente o strcspn.

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    // Dados das cartas, a carta 1 sera a carta a1 portanto todas as variaveis vão conter a1 no final do nome.
    // A carta número 2 será a carta b1 portanto suas variaveis vão conter b1 ao final do nome. 
        
        char estadoa1[2], codigoa1[5], cidadea1[50], estadob1[2], codigob1[5], cidadeb1[50];
        int populacaoa1, pontosturisticosa1, populacaob1, pontosturisticosb1;
        float areaa1, piba1, areab1, pibb1;



  // Área para entrada de dados
                   
    // Entrada de dados da carta n°1
        printf("Peencha com os dados da primeira carta. \n");
        
        printf("\n");

        printf("Qual o estado? \n");
        scanf ("%s", estadoa1);

        printf("Codigo da carta? \n");
        scanf ("%s", codigoa1);
        getchar();// para consumir o \n deixado pelo scan, estava pulando sem ler a entrada.

        printf("Nome da cidade? \n");
        //scanf("%s", &cidade01);
        fgets(cidadea1, 50, stdin);
        cidadea1[strcspn(cidadea1, "\n")] = '\0';//para retirar o \n adicionado pelo fgets
        
        printf("População? \n");
        scanf("%d", &populacaoa1);

        printf("Área km²? \n");
        scanf("%f", &areaa1);

        printf("Número PIB? \n");
        scanf("%f", &piba1);

        printf("Número de pontos turísticos? \n");
        scanf("%d", &pontosturisticosa1);
                                                     
  // Área para exibição dos dados da cidade

    // Exibição dos dados da carta n°1
        printf("\n");
    
        printf("Carta n°1: \n");

        printf("\n");

        printf("Estado: %s \n", estadoa1);
        printf("Codigo da carta: %s  \n", codigoa1);
        printf("Cidade: %s \n", cidadea1);
        printf("População: %d \n", populacaoa1);
        printf("Área: %.2f KM² \n", areaa1);
        printf("PIB: %.2f bilhões de reais \n", piba1);
        printf("Número de pontos turísticos: %d \n", pontosturisticosa1);

  //Área para entrada dos dados 
    
    // Entrada dos dados carta n°2

        printf("\n");

        printf("Peencha com os dados da segunda carta. \n");

        printf("\n");
      
        printf("Qual o estado? \n");
        scanf("%s", estadob1);

        printf("Codigo da carta? \n");
        scanf("%s", codigob1);
        getchar();

        printf("Nome da cidade? \n");
        fgets(cidadeb1, 50, stdin);
        cidadeb1[strcspn(cidadeb1, "\n")] = '\0';

        printf("População? \n");
        scanf("%d", &populacaob1);

        printf("Área km²? \n");
        scanf("%f", &areab1);

        printf("Número do PIB? \n");
        scanf("%f", &pibb1);

        printf("Número de pontos turísticos? \n");
        scanf("%d", &pontosturisticosb1);

  // Área para exibição dos dados da cidade

    // Exibição dos dados da carta n°2

        printf("\n");
    
        printf("Carta n°2: \n");

        printf("\n");

        printf("Estado: %s \n", estadob1);
        printf("Codigo da cidade: %s \n", codigob1);
        printf("Cidade: %s \n", cidadeb1);
        printf("População: %d \n", populacaob1);
        printf("Área; %.2f KM² \n", areab1);
        printf("PIB: %.2f bilhões de reais \n", pibb1);
        printf("Número de postos turísticos: %d \n", pontosturisticosb1);



  return 0;
                                                                         } 
                                                                         