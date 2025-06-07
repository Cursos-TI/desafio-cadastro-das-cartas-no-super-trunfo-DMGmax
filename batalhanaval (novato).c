#include <stdio.h>

int main() {
    // Declarando o tabuleiro 10x10
    int tabuleiro[10][10];

    // Inicializando todas as posições com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando um navio na horizontal (linha 2, começando na coluna 3)
    for (int j = 3; j < 6; j++) { // O navio ocupa 3 posições
        tabuleiro[1][j] = 3; // Representa o navio com o valor 3
    }

    // Posicionando um navio na vertical (coluna 5, começando na linha 6)
    for (int i = 5; i < 8; i++) { // O navio ocupa 3 posições
        tabuleiro[i][4] = 3; // Representa o navio com o valor 3
    }

    // Exibindo o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n");
    
    printf("\n");

    // Imprimindo as colunas (letras)
    printf("    "); // Espaço inicial para alinhar as letras com o tabuleiro
    for (int j = 0; j < 10; j++) {
        printf(" %c ", 'A' + j); // Converte para letra (A, B, C...)
    }
    printf("\n");

    // Imprimindo o tabuleiro com linhas numeradas começando em 1
    for (int i = 0; i < 10; i++) {
        printf(" %d- ", i); // Imprime o número da linha (começando em 0)
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]); // Imprime o valor da posição
        }
        printf("\n"); // Nova linha após cada linha do tabuleiro
    }

 return 0;
}