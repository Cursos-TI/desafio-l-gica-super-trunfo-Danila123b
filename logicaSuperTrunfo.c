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
  float densidade1, densidade2;
  float pibper1, pibper2;
  float superpoder1, superpoder2;

  // variaves exibição de dados
  int atributo1, atributo2;

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
  densidade1 = (float) populacao1 / area1;
  pibper1 = (float) pib1 / populacao1;
  superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibper1 + (1/densidade1);

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
  densidade2 = (float) populacao2 / area2;
  pibper2 = (float) pib2 / populacao2;
  superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibper2 + (1/densidade2);

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
  printf("Desidade populacional: %.2f\n", densidade1);
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
  printf("Desidade populacional: %.2f\n", densidade2);
  printf("Pib per capita: %.2f\n", pibper2);
  printf("Super poder: %.2f\n", superpoder2);

   // Menu interativo
    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");

    printf("Escolha o seu primeiro atributo: ");
    scanf("%d", &atributo1);

    printf(" RESULTADO\n");

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 7; i++) {
        if (i != atributo1) {
            switch(i) {
                case 1: printf("1 - População\n"); 
                break;
                case 2: printf("2 - Área\n");
                break;
                case 3: printf("3 - PIB\n");
                break;
                case 4: printf("4 - Pontos Turísticos\n"); 
                break;
                case 5: printf("5 - Densidade Populacional\n"); 
                break;
                case 6: printf("6 - PIB per capita\n"); 
                break;
                case 7: printf("7 - Super Poder\n"); 
                break;
            }
        }
    }
    printf("Escolha: ");
    scanf("%d", &atributo2);

    // Função para obter valores de acordo com o atributo
    float v1a=0, v2a=0, v1b=0, v2b=0;
    char nome1[30], nome2[30];

    // Primeiro atributo
    switch(atributo1) {
        case 1: v1a = populacao1; v2a = populacao2; 
        sprintf(nome1,"População"); 
        break;
        case 2: v1a = area1; v2a = area2;
        sprintf(nome1,"Área");
        break;
        case 3: v1a = pib1; v2a = pib2; 
        sprintf(nome1,"PIB"); 
        break;
        case 4: v1a = pontos1; v2a = pontos2; 
        sprintf(nome1,"Pontos Turísticos"); 
        break;
        case 5: v1a = densidade1; v2a = densidade2;
        sprintf(nome1,"Densidade"); 
        break;
        case 6: v1a = pibper1; v2a = pibper2; 
        sprintf(nome1,"PIB per capita");
        break;
        case 7: v1a = superpoder1; v2a = superpoder2; 
        sprintf(nome1,"Super Poder"); 
        break;
        default: printf("Atributo inválido!\n"); 
        return 0;
    }

    // Segundo atributo
    switch(atributo2) {
        case 1: v1b = populacao1; v2b = populacao2; 
        sprintf(nome2,"População"); 
        break;
        case 2: v1b = area1; v2b = area2; 
        sprintf(nome2,"Área"); 
        break;
        case 3: v1b = pib1; v2b = pib2; 
        sprintf(nome2,"PIB"); 
        break;
        case 4: v1b = pontos1; v2b = pontos2; 
        sprintf(nome2,"Pontos Turísticos"); 
        break;
        case 5: v1b = densidade1; v2b = densidade2; 
        sprintf(nome2,"Densidade"); 
        break;
        case 6: v1b = pibper1; v2b = pibper2; 
        sprintf(nome2,"PIB per capita"); 
        break;
        case 7: v1b = superpoder1; v2b = superpoder2; 
        sprintf(nome2,"Super Poder"); 
        break;
        default: printf("Atributo inválido!\n"); 
        return 0;
    }

    //  densidade 
    float soma1 = 0, soma2 = 0;
    soma1 += (atributo1 == 5) ? (1/v1a) : v1a;
    soma2 += (atributo1 == 5) ? (1/v2a) : v2a;
    soma1 += (atributo2 == 5) ? (1/v1b) : v1b;
    soma2 += (atributo2 == 5) ? (1/v2b) : v2b;

    
    printf(" Resultado\n");
    printf("%s (%s): %s=%.2f | %s=%.2f | Soma=%.2f\n", codigo1, cidade1, nome1, v1a, nome2, v1b, soma1);
    printf("%s (%s): %s=%.2f | %s=%.2f | Soma=%.2f\n", codigo2, cidade2, nome1, v2a, nome2, v2b, soma2);

    if (soma1 > soma2)
        printf("%s venceu!\n", cidade1);
    else if (soma2 > soma1)
        printf("%s venceu!\n", cidade2);
    else
        printf("\n Empate!\n");

    

    return 0;
}
