#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("Desafio Super Trunfo – Países\nCadastro das cartas\n\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Dados da Carta 1
  
  // Uma letra de 'A' a 'H' (representando um dos oito estados). 
  char carta1Estado;
  
  // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
  // Aqui reservamos espaço para 4 caracteres, considerando o caractere
  // nulo (\0) que é adicionando ao final da string.
  char carta1Codigo[4];
  
  // O nome da cidade.
  char carta1Cidade[50];
  // População: O número de habitantes da cidade.
  int carta1Populacao;
  // Área (em km²): A área da cidade em quilômetros quadrados.
  float carta1AreaCidade;
  // PIB: O Produto Interno Bruto da cidade.
  float carta1PIB;
  // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
  int carta1NumeroPontosTuristicos;

  // Dados da Carta 2
  
  // Uma letra de 'A' a 'H' (representando um dos oito estados). 
  char carta2Estado;
  
  // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
  // Aqui reservamos espaço para 4 caracteres, considerando o caractere
  // nulo (\0) que é adicionando ao final da string.
  char carta2Codigo[4];

  // O nome da cidade.
  char carta2Cidade[50];
  // População: O número de habitantes da cidade.
  int carta2Populacao;
  // Área (em km²): A área da cidade em quilômetros quadrados.
  float carta2AreaCidade;
  // PIB: O Produto Interno Bruto da cidade.
  float carta2PIB;
  // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
  int carta2NumeroPontosTuristicos;

  // Área para entrada de dados

  // Insere os dados da carta 1

  printf("==== Carta 1 ====\n");

  printf("Informe o Estado da carta (de A a H): ");
  scanf(" %c", &carta1Estado);
  
  printf("\nInforme o código da carta (letra do Estado seguido de um número de 01 a 04, ex: A01, B03): ");
  scanf("%s", carta1Codigo);

  printf("\nInforme o nome da cidade: ");
  scanf("%s", carta1Cidade);

  printf("\nInforme o número de habitantes da cidade: ");
  scanf("%d", &carta1Populacao);

  printf("\nInforme a área da cidade em quilômetros quadrados: ");
  scanf("%f", &carta1AreaCidade);

  printf("\nInforme o valor do PIB da cidade: ");
  scanf("%f", &carta1PIB);

  printf("\nInforme o número de pontos turísticos da cidade: ");
  scanf("%d", &carta1NumeroPontosTuristicos);

  printf("\n=================\n");

  // Insere os dados da carta 2

  printf("==== Carta 2 ====\n");

  printf("Informe o Estado da carta (de A a H): ");
  scanf(" %c", &carta2Estado);
  
  printf("\nInforme o código da carta (letra do Estado seguido de um número de 01 a 04, ex: A01, B03): ");
  scanf("%s", carta2Codigo);

  printf("\nInforme o nome da cidade: ");
  scanf("%s", carta2Cidade);

  printf("\nInforme o número de habitantes da cidade: ");
  scanf("%d", &carta2Populacao);

  printf("\nInforme a área da cidade em quilômetros quadrados: ");
  scanf("%f", &carta2AreaCidade);

  printf("\nInforme o valor do PIB da cidade: ");
  scanf("%f", &carta2PIB);

  printf("\nInforme o número de pontos turísticos da cidade: ");
  scanf("%d", &carta2NumeroPontosTuristicos);

  printf("\n=================\n");

  // Área para exibição dos dados da cidade
  
  printf("\n\n");

  printf("==== Dados da Carta 1 ====\n");

  printf("Estado: %c\n", carta1Estado);
  
  printf("Código da carta: %s\n", carta1Codigo);

  printf("Nome da cidade: %s\n", carta1Cidade);

  printf("População da cidade: %d habitantes\n", carta1Populacao);

  printf("Área da cidade: %.2f quilômetros quadrados\n", carta1AreaCidade);

  printf("PIB da cidade: %.2f\n", carta1PIB);

  printf("Número de pontos turísticos da cidade: %d\n", carta1NumeroPontosTuristicos);

  printf("==========================\n");

  printf("\n\n");

  printf("==== Dados da Carta 2 ====\n");

  printf("Estado: %c\n", carta2Estado);
  
  printf("Código da carta: %s\n", carta2Codigo);

  printf("Nome da cidade: %s\n", carta2Cidade);

  printf("População da cidade: %d habitantes\n", carta2Populacao);

  printf("Área da cidade: %.2f quilômetros quadrados\n", carta2AreaCidade);

  printf("PIB da cidade: %.2f\n", carta2PIB);

  printf("Número de pontos turísticos da cidade: %d\n", carta2NumeroPontosTuristicos);

  printf("==========================\n");

return 0;
} 
