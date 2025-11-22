#include <stdio.h>
// include a função `strcspn`
#include <string.h>

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
  unsigned long int carta1Populacao;
  // Área (em km²): A área da cidade em quilômetros quadrados.
  float carta1AreaCidade;
  // PIB: O Produto Interno Bruto da cidade (em bilhões de reais).
  float carta1PIB;
  // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
  int carta1NumeroPontosTuristicos;
  // Densidade populacional: a razão entre a população e área da cidade.
  float carta1DensidadePopulacional;
  // PIB per capita: a razão entre a o PIB da cidade e sua população.
  // Indica a riqueza média por pessoa.
  float carta1PIBPerCapita;
  // Super Poder
  float carta1SuperPoder;

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
  unsigned long int carta2Populacao;
  // Área (em km²): A área da cidade em quilômetros quadrados.
  float carta2AreaCidade;
  // PIB: O Produto Interno Bruto da cidade (em bilhões de reais).
  float carta2PIB;
  // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
  int carta2NumeroPontosTuristicos;
  // Densidade populacional: a razão entre a população e área da cidade.
  float carta2DensidadePopulacional;
  // PIB per capita: a razão entre a o PIB da cidade e sua população.
  // Indica a riqueza média por pessoa.
  float carta2PIBPerCapita;
  // Super Poder
  float carta2SuperPoder;

  // Área para entrada de dados

  // Insere os dados da carta 1

  printf("==== Carta 1 ====\n");

  printf("Informe o Estado da carta (de A a H): ");
  // Utilizamos um espaço em branco antes do %c para garantir que
  // as novas linhas (\n) não atrapalhem a leitura do caractere.
  scanf(" %c", &carta1Estado);
  
  printf("\nInforme o código da carta (letra do Estado + número de 01 a 04, ex: A01, B03): ");
  scanf("%s", carta1Codigo);

  printf("\nInforme o nome da cidade: ");
  // Devemos executar a função `getchar()` para evitar que o `fgets`
  // leia o caractere \n (nova linha) dos `scanf`s, permitindo
  // a entrada de texto.
  getchar();
  // Utilizamos `fgets()` para permitir nomes de cidades com espaço
  fgets(carta1Cidade, 50, stdin);
  // Substitui o caractere \n, incluido por `fgets`, por \0
  carta1Cidade[strcspn(carta1Cidade, "\n")] = 0;

  printf("\nInforme o número de habitantes da cidade: ");
  scanf("%lu", &carta1Populacao);

  printf("\nInforme a área da cidade em quilômetros quadrados: ");
  scanf("%f", &carta1AreaCidade);

  printf("\nInforme o valor do PIB da cidade (em bilhões de reais): ");
  scanf("%f", &carta1PIB);

  printf("\nInforme o número de pontos turísticos da cidade: ");
  scanf("%d", &carta1NumeroPontosTuristicos);

  // Calcula a densidade populacional, utilizando a razão
  // entre o número de habitantes e àrea da cidade.
  // Realizamos o casting do valor da população para `float`.
  carta1DensidadePopulacional = (float) carta1Populacao / carta1AreaCidade;

  // Calcula o PIB per capita, utilizando a razão entre o PIB
  // e o número de habitantes. Multiplicamos o valor do PIB por 1 bilhão,
  // para usar a mesma unidade que o número de habitantes. Realizamos o 
  // casting do valor da populção para `float`.
  carta1PIBPerCapita = carta1PIB * 1000000000 / (float) carta1Populacao;

  // Calcula-se o "Super Poder" somando todos os atributos numéricos
  // (população, área, PIB, número de pontos turísticos, PIB per capita
  // e o inverso da densidade populacional – quanto menor a densidade,
  // maior o "poder").
  carta1SuperPoder = (
    (float) carta1Populacao
    + carta1AreaCidade
    + carta1PIB
    + carta1NumeroPontosTuristicos
    + carta1PIBPerCapita
    + (1 / carta1DensidadePopulacional)
  );

  printf("\n=================\n");

  // Insere os dados da carta 2

  printf("==== Carta 2 ====\n");

  printf("Informe o Estado da carta (de A a H): ");
  // Utilizamos um espaço em branco antes do %c para garantir que
  // as novas linhas (\n) não atrapalhem a leitura do caractere.
  scanf(" %c", &carta2Estado);
  
  printf("\nInforme o código da carta (letra do Estado + número de 01 a 04, ex: A01, B03): ");
  scanf("%s", carta2Codigo);

  printf("\nInforme o nome da cidade: ");
  // Devemos executar a função `getchar()` para evitar que o `fgets`
  // leia o caractere \n (nova linha) dos `scanf`s, permitindo
  // a entrada de texto.
  getchar();
  // Utilizamos `fgets()` para permitir nomes de cidades com espaço
  fgets(carta2Cidade, 50, stdin);
  // Substitui o caractere \n, incluido por `fgets`, por \0
  carta2Cidade[strcspn(carta2Cidade, "\n")] = 0;

  printf("\nInforme o número de habitantes da cidade: ");
  scanf("%lu", &carta2Populacao);

  printf("\nInforme a área da cidade em quilômetros quadrados: ");
  scanf("%f", &carta2AreaCidade);

  printf("\nInforme o valor do PIB da cidade (em bilhões de reais): ");
  scanf("%f", &carta2PIB);

  printf("\nInforme o número de pontos turísticos da cidade: ");
  scanf("%d", &carta2NumeroPontosTuristicos);

  // Calcula a densidade populacional, utilizando a razão
  // entre o número de habitantes e àrea da cidade.
  // Realizamos o casting do valor da população para `float`.
  carta2DensidadePopulacional = (float) carta2Populacao / carta2AreaCidade;

  // Calcula o PIB per capita, utilizando a razão entre o PIB
  // e o número de habitantes. Multiplicamos o valor do PIB por 1 bilhão,
  // para usar a mesma unidade que o número de habitantes. Realizamos o 
  // casting do valor da populção para `float`.
  carta2PIBPerCapita = carta2PIB * 1000000000 / (float) carta2Populacao;

  // Calcula-se o "Super Poder" somando todos os atributos numéricos
  // (população, área, PIB, número de pontos turísticos, PIB per capita
  // e o inverso da densidade populacional – quanto menor a densidade,
  // maior o "poder").
  carta2SuperPoder = (
    (float) carta2Populacao
    + carta2AreaCidade
    + carta2PIB
    + carta2NumeroPontosTuristicos
    + carta2PIBPerCapita
    + (1 / carta2DensidadePopulacional)
  );

  printf("\n=================\n");

  // Área para exibição dos dados da cidade
  
  printf("\n\n");

  printf("==== Carta 1 ====\n");

  printf("Estado: %c\n", carta1Estado);
  
  printf("Código: %s\n", carta1Codigo);

  printf("Nome da Cidade: %s\n", carta1Cidade);

  printf("População: %lu habitantes\n", carta1Populacao);

  printf("Área: %.2f km²\n", carta1AreaCidade);

  printf("PIB: %.2f bilhões de reais\n", carta1PIB);

  printf("Número de Pontos Turísticos: %d\n", carta1NumeroPontosTuristicos);
  
  printf("Densidade Populacional: %.2f hab/km²\n", carta1DensidadePopulacional);
  
  printf("PIB per Capita: %.2f reais\n", carta1PIBPerCapita);

  printf("==========================\n");

  printf("\n\n");

  printf("==== Carta 2 ====\n");

  printf("Estado: %c\n", carta2Estado);
  
  printf("Código: %s\n", carta2Codigo);

  printf("Nome da Cidade: %s\n", carta2Cidade);

  printf("População: %lu habitantes\n", carta2Populacao);

  printf("Área: %.2f km²\n", carta2AreaCidade);

  printf("PIB: %.2f bilhões de reais\n", carta2PIB);

  printf("Número de Pontos Turísticos: %d\n", carta2NumeroPontosTuristicos);

  printf("Densidade Populacional: %.2f hab/km²\n", carta2DensidadePopulacional);
  
  printf("PIB per Capita: %.2f reais\n", carta2PIBPerCapita);

  printf("==========================\n");

  printf("\n\n");

  printf("=== Comparação de Cartas ===\n");

  // Para a densidade populacional, a carta com o menor valor vence
  int resultadoDensidadePopulacional = carta2DensidadePopulacional < carta1DensidadePopulacional;
  // Para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
  int resultadoPopulacao = carta1Populacao > carta2Populacao;
  int resultadoArea = carta1AreaCidade > carta2AreaCidade;
  int resultadoPIB = carta1PIB > carta2PIB;
  int resultadoPontosTuristicos = carta1NumeroPontosTuristicos > carta2NumeroPontosTuristicos;
  int resultadoPIBPerCapita = carta1PIBPerCapita > carta2PIBPerCapita;
  int resultadoSuperPoder = carta1SuperPoder > carta2SuperPoder;

  printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
  printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
  printf("PIB: Carta 1 venceu (%d)\n", resultadoPIB);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontosTuristicos);
  printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadoDensidadePopulacional);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPIBPerCapita);
  printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);

  printf("============================\n");

return 0;
} 
