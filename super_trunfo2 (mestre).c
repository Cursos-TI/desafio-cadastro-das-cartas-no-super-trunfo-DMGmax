#include <stdio.h>
#include <stdlib.h>

int main() {
    int criterio1, criterio2, menu;
    int pontos1 = 0, pontos2 = 0;
    float pib1 = 230.80, pib2 = 370.90;
    float area1 = 139.20, area2 = 107.40;
    unsigned long int populacao1 = 86000000, populacao2 = 30000000;
    float densidade1, densidade2, percap1, percap2, superpoder1, superpoder2;

    // Definir os nomes das cidades
    char cidade1[20] = "Teresina";
    char cidade2[20] = "Luís Correia";

    // Calculando a densidade e o PIB per capita
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    percap1 = (float) populacao1 / pib1;
    percap2 = (float) populacao2 / pib2;

    // Calculando o "superpoder" para comparação
    superpoder1 = (float) populacao1 + area1 + pib1 + percap1 + (1 / densidade1);
    superpoder2 = (float) populacao2 + area2 + pib2 + percap2 + (1 / densidade2);
    // Menu principal
    printf("*** Bem-vindo ao Super Trunfo ***\n");
    printf("\n");//pular uma linha
    printf("selecione a opção desejada:\n");
    printf("\n");
    printf("1. regras do jogo\n");
    printf("2. iniciar jogo\n");
    printf("3. encerrar jogo\n");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1://case das regras
        printf("Essas são as regras do Super trunfo: \n");
        printf("\n");
        printf("1. você escolherá dois atributos para comparar\n");
        printf("2. o atributo com maior valor vence (Menos a Densidade Demográfica, ela quanto menor o atributo melhor o valor)\n");
        printf("3. A cidade com maior valor ganho vence\n");
        break;
    
     case 2://Case do iniciar jogo
    // Menu para o primeiro critério
    printf("Escolha o primeiro critério (1 - 6):\n");
    printf("1. Superpoder\n");
    printf("2. PIB per capita\n");
    printf("3. Densidade Demográfica\n");
    printf("4. População\n");
    printf("5. Área\n");
    printf("6. PIB total\n");
    printf("Digite o número do critério escolhido: ");
    scanf(" %d", &criterio1);

    // Menu para o segundo critério, garantindo que seja diferente do primeiro
    printf("Escolha o segundo critério (1 - 6), diferente do primeiro: \n");
    printf("Digite o número do critério escolhido: ");
     scanf(" %d", &criterio2);

    // Verifica se o segundo critério é igual ao primeiro
     if (criterio1 == criterio2) {
        printf("Erro! O segundo critério não pode ser igual ao primeiro.\n");
        printf("Digite um critério diferente do primeiro: ");
        scanf("%d", &criterio2); //voltar ao menu do critério2
     }

    // Comparação dos atributos do critério1 usando operador ternário e decisão aninhada
    pontos1 += (criterio1 == 1) ? (superpoder1 > superpoder2) : 
               (criterio1 == 2) ? (percap1 > percap2) : 
               (criterio1 == 3) ? (densidade1 < densidade2) : 
               (criterio1 == 4) ? (populacao1 > populacao2) : 
               (criterio1 == 5) ? (area1 > area2) : 
               (criterio1 == 6) ? (pib1 > pib2) : 0;

    pontos2 += (criterio1 == 1) ? (superpoder2 > superpoder1) : 
               (criterio1 == 2) ? (percap2 > percap1) : 
               (criterio1 == 3) ? (densidade2 < densidade1) : 
               (criterio1 == 4) ? (populacao2 > populacao1) : 
               (criterio1 == 5) ? (area2 > area1) : 
               (criterio1 == 6) ? (pib2 > pib1) : 0;

    // Comparação dos atributos do critério2 usando operador ternário e decisão aninhada
    pontos1 += (criterio2 == 1) ? (superpoder1 > superpoder2) : 
               (criterio2 == 2) ? (percap1 > percap2) : 
               (criterio2 == 3) ? (densidade1 < densidade2) : 
               (criterio2 == 4) ? (populacao1 > populacao2) : 
               (criterio2 == 5) ? (area1 > area2) : 
               (criterio2 == 6) ? (pib1 > pib2) : 0;

    pontos2 += (criterio2 == 1) ? (superpoder2 > superpoder1) : 
               (criterio2 == 2) ? (percap2 > percap1) : 
               (criterio2 == 3) ? (densidade2 < densidade1) : 
               (criterio2 == 4) ? (populacao2 > populacao1) : 
               (criterio2 == 5) ? (area2 > area1) : 
               (criterio2 == 6) ? (pib2 > pib1) : 0;

    // Exibir resultados
    printf("Resultados da comparação:\n");

    printf("\n");

    printf("Cidade 1: %s\n", cidade1);
    printf("Cidade 2: %s\n", cidade2);

    printf("\n");

    printf("Critério 1: \n");

    printf("\n");

     switch (criterio1) {// switch do primeiro critério
         
        case 1: printf("Superpoder\n"); break;
        case 2: printf("PIB per capita\n"); break;
        case 3: printf("Densidade Demográfica\n"); break;
        case 4: printf("População\n"); break;
        case 5: printf("Área\n"); break;
        case 6: printf("PIB total\n"); break;
        default: printf("Opção inválida\n"); break;
    }

    printf("\n");

    printf("Critério 2: \n");

    printf("\n");

    switch (criterio2) {//switch do segundo critério
        
        case 1: printf("Superpoder\n"); break;

        case 2: printf("PIB per capita\n"); break;

        case 3: printf("Densidade Demográfica\n"); break;

        case 4: printf("População\n"); break;

        case 5: printf("Área\n"); break;

        case 6: printf("PIB total\n"); break;

        default: printf("Opção inválida\n"); break;
    }

    // Mostrar os valores dos atributos escolhidos
    printf("\n");

    printf("Resultado da Comparação de Atributos:\n");

    printf("\n");

    printf("Atributo 1:\n");

    printf("\n");

    printf("Valor %s: ", cidade1);
    switch (criterio1) {
        
        case 1: printf("%.2f\n", superpoder1); break;
        
        case 2: printf("%.2f\n", percap1); break;
        
        case 3: printf("%.2f\n", densidade1); break;
        
        case 4: printf("%ld\n", populacao1); break;
         
        case 5: printf("%.2f\n", area1); break;
        
        case 6: printf("%.2f\n", pib1); break;
    }

    printf("Valor %s: ", cidade2);
    switch (criterio1) {//switch usado para mostrar o valor do critério 1 no resultado
        
        case 1: printf("%.2f\n", superpoder2); break;
        
        case 2: printf("%.2f\n", percap2); break;
        
        case 3: printf("%.2f\n", densidade2); break;
        
        case 4: printf("%ld\n", populacao2); break;
         
        case 5: printf("%.2f\n", area2); break;
        
        case 6: printf("%.2f\n", pib2); break;
    }
    printf("\n");
    printf("Atributo 2:\n");
    printf("\n");
    printf("Valor %s: ", cidade1);
    switch (criterio2) {
        
        case 1: printf("%.2f\n", superpoder1); break;
        
        case 2: printf("%.2f\n", percap1); break;
        
        case 3: printf("%.2f\n", densidade1); break;
        
        case 4: printf("%ld\n", populacao1); break;
         
        case 5: printf("%.2f\n", area1); break;
        
        case 6: printf("%.2f\n", pib1); break;
    }

    printf("Valor %s: ", cidade2);

    switch (criterio2) {//switch usado para mostrar o valor do critério 2 no resultado
        
        case 1: printf("%.2f\n", superpoder2); break;
        
        case 2: printf("%.2f\n", percap2); break;
        
        case 3: printf("%.2f\n", densidade2); break;
        
        case 4: printf("%ld\n", populacao2); break;
        
        case 5: printf("%.2f\n", area2); break;
        
        case 6: printf("%.2f\n", pib2); break;
    }

    // Determinar o vencedor
    if (pontos1 > pontos2) {//pontuação baseada nos melhores valores 1 ponto pra cada vitória
        printf("\n");
        printf("%s venceu com %d pontos!\n", cidade1, pontos1);
    } else if (pontos2 > pontos1) {
        printf("%s venceu com %d pontos!\n", cidade2, pontos2);
    } else {
        printf("Empate!\n");
    } break;
   case 3://case do encerramento do jogo
        printf("Encerrando o jogo...\n"); break;
   default:// default caso insira algo errado no menu principal
        printf("Opção Inválida!\n"); break; 
}
    return 0;
}