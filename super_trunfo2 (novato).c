#include <stdio.h>

int main () {

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

//Cadastro da Carta 1:
    printf("Carta 1:\n");
    printf("\n");//Pular linha;
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Numero de habitantes: %lu\n", populacao1);
    printf ("Área em Km²: %.2fkm ²\n", area1);
    printf ("o PIB é: %.2f Milhões de reais\n", pib1);
    printf ("Pontos turísticos: %i\n", pontos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB Percapita: %.2f\n", percap1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n");

//Cadastro da Carta 2:
printf("Carta 2:\n");
    printf("\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Numero de habitantes: %lu\n", populacao2);
    printf ("Área em Km²: %.2fkm²\n", area2);
    printf ("o PIB é: %.2f Milhões de reais\n", pib2);
    printf ("Pontos turísticos: %i\n", pontos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB Percapita: %.2f\n", percap2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("Agora quem será que irá vencer essa batalha?\n");

    printf("\n");
    
    printf("(Obs: quanto menor a Densidade Populacional mais poderoso é o atributo)");

    printf("\n");

    printf("Carta 1: População: %lu\n", populacao1);
    printf("Carta 2: População: %lu\n", populacao2);

    printf("\n");

//Usando a estrutura de decisão composta:    
    if (populacao1 > populacao2) {
    printf("Carta 1 venceu!!\n");
    } else {
    printf("Carta 2 venceu\n");
    }

    printf("\n");

    printf("Carta 1: Área em Km²: %.2fKm²\n", area1);
    printf("Carta 2: Área em Km²: %.2fKm²\n", area2);

    printf("\n");

    if (area1 > area2) {
    printf("Carta 1 venceu!!\n");
    }else {
    printf("Carta 2 venceu!!\n");
    }

    printf("\n");

    printf("Carta 1: PIB: %.2f Milhões de reais\n", pib1);
    printf("Carta 2: PIB: %.2f Milhões de reais\n", pib2);

    printf("\n");

    if (pib1 > pib2) {
    printf("Carta 1 venceu!!\n");
    }else {
    printf("Carta 2 venceu\n");
    }

    printf("\n");

    printf("Carta 1: Pontos Turísticos: %i\n", pontos1);
    printf("Carta 2: Pontos Turísticos: %i\n", pontos2);

    printf("\n");

    if (pontos1 > pontos2) {
    printf("Carta 1 venceu!!\n");
    }else {
    printf("Carta 2 venceu!!\n");    
    }

    printf("\n");

    printf("Carta 1: Densidade Populacional: %.2f\n", densidade1);
    printf("Carta 2: Densidade populacional: %.2f\n", densidade2);

    printf("\n");

    if (densidade1 < densidade2) {//densidade:quanto menor for melhor é seu atributo;
    printf("Carta 1 venceu!!\n");
    }else {
    printf("Carta 2 venceu!!\n");
    }

    printf("\n");

    printf("Carta 1: PIB Percapita: %.2f\n", percap1);
    printf("Carta 2; PIB Percapita: %.2f\n", percap2);

    printf("\n");

    if (percap1 > percap2) {
    printf("Carta 1 venceu!!\n");    
    }else {
    printf("Carta 2 venceu!!\n");      
    }

    printf("\n");
    
    printf("Carta 1: Super Poder: %.2f\n", superpoder1);
    printf("Carta 2: Super Poder: %.2f\n", superpoder2);

    printf("\n");

    if (superpoder1 > superpoder2) {

    printf("Carta 1 venceu!!\n");    
    }else {
    printf("Carta 2 venceu!!");    
    }
    printf("\n");

    printf("A carta com mais vitorias vence\n");
    
    return 0;

    }