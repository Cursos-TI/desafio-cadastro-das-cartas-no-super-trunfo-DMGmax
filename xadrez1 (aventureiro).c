#include <stdio.h>

int main (){

    printf("torre se move 5 casas na direção 'Direita':\n");

    printf("\n");//pular linha;

//Movimentando a torre 5 casas a direita utilizando "FOR";
for (int i = 0; i < 5; i++) {

    printf("Direita\n"); //imprimindo o movimento no terminal;
}
    printf("\n");

    printf("Bispo se move 5 casas na direção 'Diagonal Cima-Direita':\n");
    printf("\n");
//Movimentando o bispo 5 casas na diagonal Cima-Direita utilizando "WHILE";
int i = 1;

while (i <= 5)
{
     printf("Cima-Direita\n");
     i++;
}
      printf("\n");

      printf("rainha se move 8 casas na direção 'Esquerda\n");

      printf("\n");

//Movimentando a Rainha 8 casas na direção Esquerda utilizando "DO WHILE";
 i = 1;

 do {printf ("Esquerda\n");
    i++; }
    
     while (i <= 8);

     printf("\n");

//Parte do Desafio Aventureiro;

     printf("Cavalo se move 2 casas pra 'Cima' e 1 casa para 'Direita':\n");
    printf("\n");

    for (int i = 0; i < 1; i++) // Loop externo executando uma vez para direita após o loop interno cima terminar sua ação;
    { 
        int j = 0; // Variável para o loop interno
        while (j < 2) { // Realiza dois movimentos para "Cima" usando 'WHILE' como loop interno
            printf("Cima\n");
            j++;
        }
        printf("Direita\n"); // Um movimento para a direita
    }

    return 0;
}