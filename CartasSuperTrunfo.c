#include <stdio.h>

// Desafio Super Trunfo - Países - Novato//

int main() {

// Declaração de variáveis da carta A//

char Estado;
char Codigo[10];
char Cidade[50];
int populacao;
float area;
float pib;
int NPT;  //NPT = Número de pontos turisticos//

// Declaração de variáveis da Carta B//
char Estado2;
char Codigo2[10];
char Cidade2[25];
int populacao2;
float area2;
float pib2;
int NPT2; //NPT2 = Números de pontos turisticos

// Leitura de valores da carta A//
printf("Insira os valores da carta 1 abaixo:");
  
printf("\nEstado: ");
scanf(" %c", &Estado);

printf("Codigo: ");
scanf("%s", Codigo);

printf("Cidade: ");
scanf("%s", Cidade);

printf("População: ");
scanf("%d", &populacao);

printf("Área em KM²: ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &pib);

printf("NPT: ");
scanf("%d", &NPT);

// Impressão da carta A//
printf("\nCarta 1:\n");
printf("Estado: %c\n", Estado);
printf("Codigo: %s\n", Codigo);
printf("Cidade: %s\n", Cidade);
printf("Populacao: %d\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f bilhões de reais\n", pib);
printf("Número de pontos turisticos: %d\n", NPT);

// Leitura da carta B//
printf("\nInsira os valores da carta 2 abaixo:");

printf("\nEstado: ");
scanf(" %c", &Estado2);
    
printf("Codigo: ");
scanf("%s", Codigo2);

printf("Cidade: "); 
scanf("%s", Cidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área em KM²: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("NPT: ");
scanf("%d", &NPT2);

//Impressão da carta B
printf("\nCarta 2:\n");
printf("Estado: %c\n", Estado2);
printf("Codigo: %s\n", Codigo2);
printf("Cidade: %s\n", Cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de pontos turisticos: %d\n", NPT2);
  
return 0;
} 
