#include <stdio.h>

int main (){
// Variáveis sobre a primeira carta.
    char estado1;
    char codigo1 [4];
    char nomeCidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

// Variáveis sobre a segunda carta.
   char estado2;
   char codigo2 [4];
   char nomeCidade2 [50];
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;

// Entrada de dados da primeira carta.
printf("Cadastro da primeira carta: \n");
printf("Informe somente a primeira letra do estado: ");
scanf(" %c",&estado1);
printf("Informe o código da Carta (Ex: A01): ");
scanf("%s", codigo1);
printf("Digite o nome da cidade: ");
scanf("%s", nomeCidade1);
printf("Digite a população da cidade: ");
scanf("%d", &populacao1);
printf("Informe a àrea da cidade em km²: ");
scanf("%f", &area1);
printf("Digite o PIB em bilhões de R$: ");
scanf("%f", &pib1);
printf("Quantidade de pontos turísticos da cidade: ");
scanf("%d", &pontosTuristicos1);

// Entrada de dados da segunda carta.
printf("\nCadastro da segunda carta: \n");
printf("Informe somente a primeira letra do estado: ");
scanf(" %c", &estado2);
printf("Informe o código da carta (Ex: B02): ");
scanf("%s", codigo2);
printf("Digite o nome da cidade: ");
scanf("%s", nomeCidade2);
printf("Digite a população da cidade: ");
scanf("%d", &populacao2);
printf("Informe a área da cidade em km²: ");
scanf("%f", &area2);
printf("Digite o PIB em bilhões de R$: ");
scanf("%f", &pib2);
printf("Quantidade de pontos turísticos da cidade: ");
scanf("%d", &pontosTuristicos2);

// Exibição de dados
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais \n", pib1);
printf("Número de pontos Turísticos: %d\n", pontosTuristicos1);

printf("\nCarta 2: \n");
printf("Estado: %c\n",estado2);
printf("Código: %s\n", codigo2);
printf("Nome da cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
}

