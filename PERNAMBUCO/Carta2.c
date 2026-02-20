#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

// | SEGUNDA CARTA |
  char Estado [20]; // Estado
  char codigoCidade [20]; // Código da cidade
  char cidade [20]; // Nome da cidade
  int populacao; // Quantidade da populacao na cidade
  int Turisticos; // Numero de pontos turisticos!
  float area;
  float PIB;

  // Área para entrada de dados
  // AQUI IRÁ INSERIR DADOS!
  printf("---- SETOR DE CADASTRO ----\n");
  printf("--- INSIRA OS DADOS PARA AS CARTAS ---\n");
  printf("--- ALERTA! INSIRA EM LETRAS MAIUSCULAS! ---\n");
  printf("--- NAO UTILIZE VIRGULA! UTILIZA PONTO FINAL ---\n");
  printf("--- SEM ACENTUACAO ---\n");

  // inserir nome do Estado
  printf("Nome do ESTADO: \n");
  scanf("%s", Estado);
  //  inserir nome da cidade
  printf("Nome da cidade: \n");
  scanf("%s", cidade);

  // inserir um codigo para a cidade
  printf("Digite o codigo da cidade: \n");
  scanf("%s", codigoCidade);

  // Populacao total da cidade
  printf("Qual a populacao total da cidade: \n");
  scanf("%d", &populacao);

  // inserir quantos pontos turisticos possui!
  printf("Quantos pontos turisticos possui: \n");
  scanf("%d", &Turisticos);

  // area em km² da cidade
  printf ("Qual a area em km: \n");
  scanf("%f", &area);

  // Inserir o PIB da cidade
  printf("Qual o PIB da cidade: \n");
  scanf("%f", &PIB);

  // Área para exibição dos dados da cidade

  printf("----- DADOS CADASTRADOS ----- \n");
  printf("Estado: %s\n", Estado);
  printf("Cidade: %s\n", cidade);
  printf("Codigo: %s\n", codigoCidade);
  printf("Populacao: %d\n", populacao);
  printf("Quantidade de pontos Turisticos: %d\n", Turisticos);
  printf("Area em kms: %.2f\n", area);
  printf("PIB: %.2f\n", PIB);
  
return 0;
} 
