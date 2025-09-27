#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1,estado2;
  char codigo1[4], codigo2[4];
  char cidade1[40], cidade2[40];
  int populacao1, populacao2;
  float area1,area2;
  float pib1,pib2;
  int pontos1, pontos2;

   //Variaveis para calculos
  float desidade1, desidade2;
  float pibper1, pibper2;
  float superpoder1, superpoder2;

  // Área para entrada de dados
  printf("Cadastro de duas cartas\n");

  //primeira carta

  printf("Carta 1 \n");
  printf("Digite o estado (A-z):");
  scanf("%c",&estado1);

  printf("Digite o codigo (ex:A01, A02):");
  scanf("%s",codigo1);

  printf("Digite o nome da cidade:");
  scanf("%s",cidade1);

  printf("Digite a populacao:");
  scanf("%d",&populacao1);

  printf("Digite a area:");
  scanf("%f",&area1);

  printf("Digite o pib:");
  scanf("%f",&pib1);

  printf("Digite o numero de pontos turisticos:");
  scanf("%d",&pontos1);

   //calculos da carta 1
  desidade1 = (float) populacao1 / area1;
  pibper1 = (float) pib1 / populacao1;
  superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibper1 + (1/desidade1);

  //segunda carta

  printf("carta 2 \n");
  printf("Digite o estado:");
  scanf(" %c", &estado2);

  printf("Digite o codigo (ex:A01, A02):");
  scanf("%s",codigo2);

  printf("Digite o nome da cidade:");
  scanf("%s",cidade2);

  printf("Digite a populacao:");
  scanf("%d",&populacao2);

  printf("Digite a area:");
  scanf("%f",&area2);

  printf("Digite o pib:");
  scanf("%f",&pib2);

  printf("Digite o numero de pontos turisticos:");
  scanf("%d",&pontos2);

  //calculos da carta 2
  desidade2 = (float) populacao2 / area2;
  pibper2 = (float) pib2 / populacao2;
  superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibper2 + (1/desidade2);

  // Área para exibição dos dados da cidade

  printf("Dados cadastrados\n");

  printf(" Carta 1 \n");
  printf("Estado:%c\n",estado1);
  printf("Codigo:%s\n",codigo1);
  printf("Cidade:%s\n",cidade1);
  printf("Populacao:%d\n",populacao1);
  printf("Area:%.2f\n",area1);
  printf("PIB:%.2f\n",pib1);
  printf("Pontos Turistico:%d\n", pontos1);
  printf("Desidade populacional: %.2f\n", desidade1);
  printf("Pib per capita: %.2f\n", pibper1);
  printf("Super poder: %.2f\n", superpoder1);

  printf(" Carta 2 \n");
  printf("Estado:%c\n", estado2);
  printf("Codigo:%s\n",codigo2);
  printf("Cidade:%s\n",cidade2);
  printf("Populacao:%d\n",populacao2);
  printf("Area:%.2f\n",area2);
  printf("PIB:%.2f\n",pib2);
  printf("Pontos Turisticos:%d\n", pontos2);
  printf("Desidade populacional: %.2f\n", desidade2);
  printf("Pib per capita: %.2f\n", pibper2);
  printf("Super poder: %.2f\n", superpoder2);

  // Comparação de Cartas

  if (populacao1 > populacao2) {
     printf("Cidade 1 tem  maior população.\n");
     printf("A cidade vencedora é: %s\n", cidade1);
  } 
  else {
    printf("Cidade 2 tem maior  população.\n");
    printf("A cidade vencedora é: %s\n", cidade2);
  }
  if (area1 > area2){
    printf("A area 1 e maior.\n");
    printf("A area da cidaede vencedora é: %s\n",cidade1);
  }
  else{
    printf("A area 2 é maoir.\n ");
    printf("A area da cidade vencedora é: %s\n",cidade2);
  }
     



    return 0;
}
