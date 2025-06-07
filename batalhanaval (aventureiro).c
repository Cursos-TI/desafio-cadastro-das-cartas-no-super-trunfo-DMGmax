#include <stdio.h>

#define TAMANHO 10

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Navio horizontal (linha 2, colunas 3 a 5)
    for (int j = 3; j < 6; j++) {
        tabuleiro[1][j] = 3;
    }

    // Navio vertical (coluna 5, linhas 6 a 8)
    for (int i = 5; i < 8; i++) {
        tabuleiro[i][4] = 3;
    }

    // Navio diagonal (de 2,2 a 4,4) 
    for (int i = 0; i < 3; i++) {
        tabuleiro[2 + i][2 + i] = 3;
    }

    // Navio diagonal (de 5,7 a 7,5) 
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][7 - i] = 3;
    }

    // Exibindo o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n\n");

    printf("    ");
    for (int j = 0; j < TAMANHO; j++) {
        printf(" %c ", 'A' + j);
    }
    printf("\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf(" %d- ", i);
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}