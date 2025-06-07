#include <stdio.h>

#define TAMANHO 10

void aplicarHabilidade(int tabuleiro[TAMANHO][TAMANHO], int origemX, int origemY, int habilidade[5][5], int tamanhoHabilidade) {
    for (int i = 0; i < tamanhoHabilidade; i++) {
        for (int j = 0; j < tamanhoHabilidade; j++) {
            int x = origemX + i - tamanhoHabilidade / 2;
            int y = origemY + j - tamanhoHabilidade / 2;

            if (x >= 0 && x < TAMANHO && y >= 0 && y < TAMANHO && habilidade[i][j] == 1) {
                tabuleiro[x][y] = 5;
            }
        }
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Navios preexistentes
    for (int j = 3; j < 6; j++) { tabuleiro[1][j] = 3; }
    for (int i = 5; i < 8; i++) { tabuleiro[i][4] = 3; }
    for (int i = 0; i < 3; i++) { tabuleiro[2 + i][2 + i] = 3; }
    for (int i = 0; i < 3; i++) { tabuleiro[5 + i][7 - i] = 3; }

    // Matrizes de habilidade
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Aplicação das habilidades no tabuleiro
    aplicarHabilidade(tabuleiro, 2, 2, cone, 5);
    aplicarHabilidade(tabuleiro, 5, 5, cruz, 5);
    aplicarHabilidade(tabuleiro, 7, 7, octaedro, 5);

    // Exibindo o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n\n");

    printf("    ");
    for (int j = 0; j < TAMANHO; j++) { printf(" %c ", 'A' + j); }
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