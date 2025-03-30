#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

//Dados das Cartas:

//Carta 1:
char estado1[30] = "Piauí"; 
char codigo1[30] = "A01";
char cidade1[20] = "Teresina";
unsigned long int populacao1 = 86000000;
int pontos1 = 35;
float pib1 = 230.80;
float area1 = 139.20;
float densidade1 = (float) populacao1 / area1;//Calculo de "População" divido por "Área" = "Densidade Populacional"
float percap1 = (float) populacao1 / pib1;// Calculo de "População" dividido por "PIB" = "PIB Percapita"
float superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontos1 + percap1 + (1 / densidade1);//Calculo do "Super Poder" = "População" + "Área" + "PIB" + "Pontos Turísticos" + "PIB Percapita" + "Densidade Populacional"

//Carta 2:
char codigo2[10] = "A02";
char cidade2[20] = "LuísCorreia";
unsigned long int populacao2 = 30000000;
int pontos2 = 30;
float pib2 = 370.90;
float area2 = 107.40;
float densidade2 = (float) populacao2 / area2;//Calculo de "População" divido por "Área" = "Densidade Populacional"
float percap2 = (float) populacao2 / pib2;// Calculo de "População" dividido por "PIB" = "PIB Percapita"
float superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontos2 + percap2 + (1 / densidade2);//Calculo do "Super Poder" = "População" + "Área" + "PIB" + "Pontos Turísticos" + "PIB Percapita" + "Densidade Populacional"

//Menu do jogo Super Trunfo

printf("### Jogo Super Trunfo ###\n");
printf("\n");
printf("Menu Inicial\n");
printf("1. Dados das cartas\n");
printf("2. Regras\n");
printf("3. Iniciar jogo\n");
printf("Escolha uma dessas opções:\n");
//fazendo a interface do jogo
int opcao;
scanf("%d", &opcao);

switch (opcao)
{
//Dados das cartas   
case 1:
  printf("Carta 1:\n");
  printf("\n");
  printf("Código da Carta: A01\n");
  printf("Cidade: Teresina\n");
  printf("Número de habitantes: 86000000\n");
  printf("Pontos Turísticos: 35 Pontos\n");
  printf("PIB: 230.80 Milhões\n");
  printf("Área em Km²: 139.20 Km²\n");
  printf("Densidade Populacional: 617816.12\n");
  printf("PIN Percapita: 372616.97\n");
  printf("Super Poder: 86373016.00\n");
  printf("\n");
  printf("Carta 2:\n");
  printf("\n");
  printf("Código da Carta: A02\n");
  printf("Cidade: LuísCorreia\n");
  printf("Número de habitantes: 30000000\n");
  printf("Pontos Turísticos: 30 Pontos\n");
  printf("PIB: 370.90 Milhões\n");
  printf("Área em Km²: 107.40 Km²\n");
  printf("Densidade Populacional: 279329.59\n");
  printf("PIN Percapita: 80884.34\n");
  printf("Super Poder: 30081392.00\n");
break;
  
//regras das cartas
case 2:
   printf("1. Escolha uma Carta do jogo e seus atributos, quanto maior os atributos da carta melhor seu atributo\n");
   printf("2. Menos a Densidade Populacional, quanto menor a Densidade, melhor é o atributo\n");
   printf("3. 2A carta com maior vitória de atributos vence\n");
    break;

default: 
 printf("Opção Inválida\n");    
 break;    
//inicio da batalha de cartas
case 3:

    printf("Escolha qual Atributo será comparado?\n");
    printf("\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    

    printf("\n");

    int atributo;
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
    printf("Carta 1: Estado: %s\n", estado1);
    printf("Carta 1: Cidade: %s\n", cidade1);
    printf("Carta 1: População: %lu\n", populacao1);
    printf("\n");
    printf("Carta 2: Estado: %s\n", estado1);
    printf("Carta 2: Cidade: %s\n", cidade2); 
    printf("Carta 2: População: %lu\n", populacao2);

    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!!\n");
        } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu!!\n");
        } else {
        printf("EMPATE!!\n");    
        }
        break;
    case 2:    
    printf("Carta 1: Estado: %s\n", estado1);
    printf("Carta 1: Cidade: %s\n", cidade1);
    printf("Carta 1: Área: %.2f\n", area1);
    printf("\n");
    printf("Carta 2: Estado: %s\n", estado1);
    printf("Carta 2: Cidade: %s\n", cidade2); 
    printf("Carta 2: Área: %.2f\n", area2);

    if (area1 > area2) {
        printf("Carta 1 venceu!!\n");
        } else if (area2 > area1) {
        printf("Carta 2 venceu!!\n");
        } else {
        printf("EMPATE!!\n");    
        }
        break;

    case 3:
    printf("Carta 1: Estado: %s\n", estado1);
    printf("Carta 1: Cidade: %s\n", cidade1);
    printf("Carta 1: PIB: %.2f\n", pib1);
    printf("\n");
    printf("Carta 2: Estado: %s\n", estado1);
    printf("Carta 2: Cidade: %s\n", cidade2); 
    printf("Carta 2: PIB: %.2f\n", pib2);

    if (pib1 > pib2) {
        printf("Carta 1 venceu!!\n");
        } else if (pib2 > pib1) {
        printf("Carta 2 venceu!!\n");
        } else {
        printf("EMPATE!!\n");    
        }

        break;
     
    case 4:
    printf("Carta 1: Estado: %s\n", estado1);
    printf("Carta 1: Cidade: %s\n", cidade1);
    printf("Carta 1: Pontos Turísticos: %i\n", pontos1);
    printf("\n");
    printf("Carta 2: Estado: %s\n", estado1);
    printf("Carta 2: Cidade: %s\n", cidade2); 
    printf("Carta 2: Pontos Turísticos: %i\n", pontos2);

    if (pontos1 > pontos2) {
        printf("Carta 1 venceu!!\n");
        } else if (pontos2 > pontos1) {
        printf("Carta 2 venceu!!\n");
        } else {
        printf("EMPATE!!\n");    
        }

        break;
    
    case 5:
    printf("Carta 1: Estado: %s\n", estado1);
    printf("Carta 1: Cidade: %s\n", cidade1);
    printf("Carta 1:Densidade Demográfica: %.2f\n", densidade1);
    printf("\n");
    printf("Carta 2: Estado: %s\n", estado1);
    printf("Carta 2: Cidade: %s\n", cidade2); 
    printf("Carta 2: Densidade Demográfica: %.2f\n", densidade2);

    if (densidade1 > densidade2) {
        printf("Carta 1 venceu!!\n");
        } else if (densidade2> densidade1) {
        printf("Carta 2 venceu!!\n");
        } else {
        printf("EMPATE!!\n");    
        }

        break;

    default:
        printf("Opção Inválida\n");    
        break;
    }        
 

return 0;

 }


}