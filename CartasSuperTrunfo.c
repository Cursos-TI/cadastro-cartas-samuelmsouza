#include <stdio.h>
#include <string.h>// para funcionar corretamente o strcspn.
#include <stdlib.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    // Dados das cartas, a carta 1 sera a carta a1 portanto todas as variaveis vão conter a1 no final do nome.
    // A carta número 2 será a carta b1 portanto suas variaveis vão conter b1 ao final do nome. 
        
        char estadoa1[30], codigoa1[5], cidadea1[50], estadob1[30], codigob1[5], cidadeb1[50];
        int populacaoa1, pontosturisticosa1, populacaob1, pontosturisticosb1;
        float areaa1, piba1, areab1, pibb1;
    

  // Área para entrada de dados
                   
    // Entrada de dados da carta n°1
        printf("Peencha com os dados da primeira carta. \n");
        
        printf("\n");

        printf("Qual o estado? \n");
        fgets(estadoa1, 30, stdin);
        estadoa1[strcspn(estadoa1, "\n")] = '\0';

        printf("Codigo da carta? \n");
        scanf ("%s", codigoa1);
        getchar(); //para consumir o \n deixado pelo scan, estava pulando sem ler a entrada.

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
        getchar();

        float densidadea1 = (float) populacaoa1 / areaa1;
        float percapitaa1 = (float) piba1 / populacaoa1;
        float densidadeinvertidaa1 = (float) 1 / densidadea1;
        float superpodera1 = (float) populacaoa1 + areaa1 + piba1 + percapitaa1 + densidadeinvertidaa1 + pontosturisticosa1;
        
    


                                                 
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
        printf("Densidade Populacional: %.2f hab/km² \n", densidadea1);
        printf("PIB per capita: %.2f Reais \n", percapitaa1);
        printf("Super poder: %.2f\n", superpodera1);
  //Área para entrada dos dados 
    
    // Entrada dos dados carta n°2

        printf("\n");

        printf("Peencha com os dados da segunda carta. \n");

        printf("\n");
      
        printf("Qual o estado? \n");
        fgets(estadob1, 30, stdin);
        estadob1[strcspn(estadob1, "\n")] = '\0';

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

        float densidadeb1 = (float) populacaob1 / areab1;
        float percapitab1 = (float) pibb1 / areab1;
        float densidadeinvertidab1 = (float) 1 / densidadeb1;
        float superpoderb1 = (float) populacaob1 + areab1 + pibb1 + percapitab1 + densidadeinvertidab1 + pontosturisticosb1;
        //int populacaoab, areaab, pibab, pontosab, densidadeab, percapitaab, superpoderab;
      //populacaoab = populacaoa1 > populacaob1;
      //areaab = areaa1 > areab1;
      //pibab = piba1 > pibb1;
      //pontosab = pontosturisticosa1 > pontosturisticosb1;
      //densidadeab = densidadea1 > densidadeb1;
      //percapitaab = percapitaa1 > percapitab1;
      //superpoderab = superpodera1 > superpoderb1;
        

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
        printf("Densidade Populacional: %.2f km² \n", densidadeb1);
        printf("PIB per capita: %.2f Reais \n", percapitab1);
        printf("Super poder: %2.f\n", superpoderb1);
        printf("\n");
      
      
        // area de comparação das cartas
        
        int escolha;
        
        printf("***Comparação da Cartas*** \n");

        printf("Escolha qual atributo você quer comparar! \n");
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Pontos turísticos \n");
        printf("5. Densidade demográfica \n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1: 
            if (populacaoa1 > populacaob1)
            {
            printf("**População** \n");
            printf("Carta 1- %s: %d \n", cidadea1, populacaoa1);
            printf("Carta 2- %s: %d \n", cidadeb1, populacaob1);
            printf("Carta n°1 %s venceu! \n", cidadea1);
            }
            else if (populacaoa1 == populacaob1)
            {
              printf("As cartas empataram! \n");
            }
            else 
            {
              printf("**População** \n" );
              printf("Carta 1- %s: %d \n", cidadea1, populacaoa1);
              printf("Carta 2- %s: %d \n", cidadeb1, populacaob1);
              printf("Carta n°2 %s venceu! \n", cidadeb1);  
            }
          break;

          case 2:
            if (areaa1 > areab1)
            {
            printf("**Área** \n");
            printf("Carta 1- %s: %f \n", cidadea1, areaa1);
            printf("Carta 2- %s: %f \n", cidadeb1, areab1);
            printf("Carta n°1 %s venceu! \n", cidadea1);
            }
            else if ( areaa1 == areab1)
            {
            printf("As Cartas empataram! \n");
            }
            else
            {
            printf("**Área** \n");
            printf("Carta 1- %s: %f \n", cidadea1, areaa1);
            printf("Carta 2- %s: %f \n", cidadeb1, areab1);
            printf("Carta n°2 %s venceu! \n", cidadeb1);
            }
          break;
          
          case 3:
            if (piba1 > pibb1)
            {
            printf("**PIB**  \n");
            printf("Carta 1- %s: %f \n", cidadea1, piba1);
            printf("Carta 2- %s: %f \n", cidadea1, pibb1);
            printf("Carta n°1 %s venceu! \n", cidadea1);
            }
            else if (piba1 == pibb1)
            {
            printf("As Cartas empataram! \n");
            }
            else 
            {
            printf("**PIB** \n");
            printf("Carta 1- %s: %f \n", cidadea1, pibb1);
            printf("Carta 2- %s: %f \n", cidadeb1, pibb1);
            printf("Carta n°2 %s venceu! \n", cidadeb1);
            }
          break;
            
          case 4:
          if (pontosturisticosa1 > pontosturisticosb1)
          {
           printf("**Pontos turísticos**");
           printf("Carta 1- %s: %d \n", cidadea1, pontosturisticosa1);
           printf("Carta 2- %s: %d \n", cidadeb1, pontosturisticosb1);
           printf("Carta n°1 %s venceu! \n", cidadea1);
          }
          else if (pontosturisticosa1 == pontosturisticosb1)
           {
          printf("As Cartas empataram! \n");
           }
          else
          {
          printf("**Pontos turísticos** \n");
          printf("Carta 1- %s: %d \n", cidadea1, pontosturisticosa1);
          printf("Carta 2- %s: %d \n", cidadeb1, pontosturisticosb1);
          printf("Carta n°2 %s venceu! \n", cidadeb1);
          }
        break;

        case 5:
          if (densidadea1 < densidadeb1)
          {
          printf("**Densidade Demográfica** \n");
          printf("Carta 1- %s: %f \n", cidadea1, densidadea1);
          printf("Carta 2- %s: %f \n", cidadeb1, densidadeb1);
          printf("Carta n°1 %s venceu! \n", cidadea1);
        }
         else if (densidadea1 == densidadeb1)
         {
          printf("As Cartas empataram! \n");
         }
         else
         {printf("**Densidade Demográfica** \n");
          printf("Carta 1- %s: %f \n", cidadea1, densidadea1);
          printf("Carta 2- %s: %f \n", cidadeb1, densidadeb1);
          printf("Carta n°2 %s venceu!\n", cidadeb1);
        }
        break;

        default: 
        {printf("Opção invalida! \n");
        }
      }
          
        
        
        
        
        
        
        
        
        // codigo abaixo usado no nivel anterior
        
        //printf("Atributo População \n");
        //printf("\n");
       
        // O codigo a baixo é o do desafio nivel mestre do capitulo anterior.
       //printf("População: Carta 1 venceu Carta 2 (%d)\n", populacaoab);
       //printf("Área: Carta 1 venceu Carta 2 (%d)\n", areaab);
       //printf("PIB: Carta 1 venceu Carta 2 (%d)\n", pibab);
       //printf("Pontos túristicos: Carta 1 venceu Carta 2 (%d)\n", pontosab);
       //printf("Densidade: Carta 1 venceu Carta 2: (%d)\n", densidadeab);
       //printf("PIB per Capita: Carta 1 venceu Carta 2 (%d)\n", percapitaab);
       //printf("Super poder: Carta 1 venceu Carta 2 (%d)\n", superpoderab);

       //if( populacaoa1 > populacaob1){
       //printf("Carta 1 - %s: %d \n", cidadea1, populacaoa1);
       //printf("Carta 2 -  %s: %d \n",cidadeb1,populacaob1);
       //printf("Carta n°1 %s venceu! \n",cidadea1);
       //}
       //else {
       //printf("Carta 1 - %s: %d \n", cidadea1, populacaoa1);
       //printf("Carta 2 -  %s: %d \n",cidadeb1,populacaob1);
       //printf("Carta n°2 %s venceu! \n",cidadeb1);
        
       





        


  return 0;
      
                                                                          
    }                                                                    