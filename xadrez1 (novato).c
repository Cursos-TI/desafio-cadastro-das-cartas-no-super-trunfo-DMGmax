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

    return 0;
}