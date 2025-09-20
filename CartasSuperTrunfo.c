#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Dados da carta n°1,a carta 1 sera a carta a1 portanto todas as variaveis vão conter a1 no final do nome.
    char estado1[2], codigo1[5], cidade01[20];
    int populacaoa1, pontosturisticosa1;
    float areaa1, piba1;



  // Área para entrada de dados
 
  // entrada de dados da carta n°1
  printf("Qual o estado? \n");
  scanf ("%s", estado1);

  printf("Codigo da carta? \n");
  scanf ("%s", &codigo1);

  printf("Nome da cidade? \n");
  scanf("%s", &cidade01);

  printf("População? \n");
  scanf("%d", &populacaoa1);

  printf("Área km²? \n");
  scanf("%.2f", &areaa1);

  printf("Número PIB? \n");
  scanf("%.2f", &piba1);

  printf("Número de pontos turísticos? \n");
  scanf("%d", &pontosturisticosa1);
  // Área para exibição dos dados da cidade
// exibição dos dados da crata n°1

  printf("Estado: %s \n", estado1);
  printf("Codigo da carta: %s  \n", codigo1);
  printf("Cidade: %s \n", cidade01);
  printf("População: %d \n", populacaoa1);
  printf("Área: %2f \n", areaa1);
  printf("PIB: %2f \n", piba1);
  printf("Número de pontos turísticos: %d", pontosturisticosa1);






return 0;
} 
