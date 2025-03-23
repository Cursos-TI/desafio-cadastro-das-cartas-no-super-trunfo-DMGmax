#include <stdio.h>

int main(){

    //introdução ao jogo
    printf("Desafio Super Trunfo!!\n");
    printf ("\n");
    printf ("Esse é o jogo Super Trunfo\n");
    printf ("Logo abaixo é onde você irá cadastrar sua carta no jogo\n");
    
    printf("\n");

    //tutorial de cadastro da carta
    printf ("1-Coloque o nome do estado;\n");
    printf ("2-O código da carta;\n");
    printf ("3-O nome da cidade;\n");
    printf ("4-A quantidade de habitantes (milhões);\n");
    printf ("5-O valor da área (km²);\n");
    printf ("6-O PIB da cidade;\n");
    printf("7-E os pontos turísticos;\n");
    printf("8-Densidade Populacional e PIB per capita são calculados automaticamente\n");
    printf ("\n");

    //Dados da carta 1
    char estado[9]; //nome do estado Piauí
    char codigo1[80]; //Código da carta "inicial do estado e numero da carta" A01
    char cidade1[80];//Nome da cidade Teresina
    int populacao1;// numero da população 86000000
    int pontos1; // numero de pontos turísticos da cidade 35
    float pib1; // pib da cidade 230.80 
    float area1;// tamanho da Área em Km² da cidade 139.20


    printf ("\n");//Apenas pra pular 1 linha

    //cadastro da carta 1

     //cadastro do nome feito pelo usuário
    printf("Insira o nome do estado:\n");
    scanf ("%s", estado);
    printf ("O estado é: %s\n", estado);

    //cadastro do código feito pelo usuário
    printf("Insira o código da carta:\n");
    scanf("%s", codigo1);
    printf ("o código da carta é: %s\n", codigo1);

    //cadastro do nome da cidade feito pelo usuário
    printf ("Insira o nome da cidade:\n");
    scanf ("%s", cidade1);
    printf ("nome da cidade é: %s\n", cidade1);

    //Cadastro da quantidade de população feita pelo usuário
    printf ("insira a quantidade de habitantes:\n");
    scanf ("%d" , &populacao1);
    printf ("A quantidade de habitantes é: %d\n", populacao1);

    //Cadastro do valor da Área feita pelo usuário
    printf("Insira o valor da Área em km²:\n");
    scanf ("%f", &area1);
    printf("O valor da área em km² é: %.2f km²\n", area1);

    //Cadastro do PIB feito pelo usuário
    printf ("Insira o PIB:\n");
    scanf ("%f", &pib1);
    printf ("o PIB é: %.2f Milhões de reais\n", pib1);

    //Cadastro dos pontos turísticos feito pelo usuário
    printf ("Insira a quantidade de pontos turísticos:");
    scanf("%i", &pontos1);
    printf("A quantidade de pontos turísticos é: %i (Mihões)\n", pontos1);
    printf("\n");

    // resultado de cadastro da carta 1
    printf("Carta numero 1:\n");
    printf("\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Numero de habitantes: %d\n", populacao1);
    printf ("Área em Km²: %.2fkm ²\n", area1);
    printf ("o PIB é: %.2f Milhões de reais\n", pib1);
    printf ("Pontos turísticos: %i\n", pontos1);

    //Calculando a Densidade Populacional e PIB Per Capita da Carta 1:
    float densidade1 = (float) populacao1 / area1;
    float percap1 = (float) populacao1 / pib1;

    //Resultado dos Calculos da Carta 1:
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", percap1);

    
    printf("\n");// Apenas pra pular 1 linha

    printf("Agora vamos para o cadastro da carta 2, o mesmo procedimento:\n");

    //Dados da carta 2

    //Estado do Piauí
    char codigo2[80];// código A02
    char cidade2[80];//Cidade luísCorreia (junto pois não usarei fgets)
    int populacao2;//População 30000000
    int pontos2;// 30 pontos turísticos
    float pib2; //PIB 370.90
    float area2;//107.40 km²

    printf("\n");

    //Cadastro da carta 2


   //cadastro do nome feito pelo usuário
   printf("Insira o nome do estado:\n");
   scanf ("%s", estado);
   printf ("O estado é: %s\n", estado);

   //cadastro do código feito pelo usuário
   printf("Insira o código da carta:\n");
   scanf("%s", codigo2);
   printf ("o código da carta é: %s\n", codigo2);

   //cadastro do nome da cidade feito pelo usuário
   printf ("Insira o nome da cidade:\n");
   scanf ("%s", cidade2);
   printf ("nome da cidade é: %s\n", cidade2);

   //Cadastro da quantidade de população feita pelo usuário
   printf ("insira a quantidade de habitantes:\n");
   scanf ( "%d" , &populacao2);
   printf ("A quantidade de habitantes é: %d\n", populacao2);

   //Cadastro do valor da Área feita pelo usuário
   printf("Insira o valor da Área em km²:\n");
   scanf ("%f", &area2);
   printf("O valor da área em km² é: %.2f km²\n", area2);

   //Cadastro do PIB feito pelo usuário
   printf ("Insira o PIB:\n");
   scanf ("%f", &pib2);
   printf ("o PIB é: %.2f Milhões de reais\n", pib2);

   //Cadastro dos pontos turísticos feito pelo usuário
   printf ("Insira a quantidade de pontos turísticos:");
   scanf("%i", &pontos2);
   printf("A quantidade de pontos turísticos é: %i\n", pontos2);
   printf("\n");

   // resultado de cadastro da carta 2
   printf("Carta numero 2:\n");
   printf("\n");
   printf("Estado: %s\n", estado);
   printf("Código da carta: %s\n", codigo2);
   printf("Cidade: %s\n", cidade2);
   printf("Numero de habitantes: %d\n", populacao2);
   printf ("Área em Km²: %.2fkm² \n", area2);
   printf ("PIB: %.2f Milhões de reais\n", pib2);
   printf ("Pontos turísticos: %i\n", pontos2);

   //Calculando Densidade Populacional e PIB Per Capita da Carta 2
   float densidade2 = (float) populacao2 / area2;
   float percap2 = (float) populacao2 / pib2;

   //Resultado dos Calculos da Carta 2:
   printf ("Densidade Populacional: %.2f hab/km²\n", densidade2);
   printf("PIB per Capita: %.2f\n", percap2);

   printf("\n");// Apenas pra pular 1 linha

   printf("Pronto, você cadastrou suas cartas no jogo!!\n");

    return 0;

    }