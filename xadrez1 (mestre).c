#include <stdio.h>

// Função recursiva para movimentar a torre
void moverTorre(int passos) {
    if (passos == 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(passos - 1); // Chamada recursiva
}

// Função recursiva com loop aninhado para movimentar o bispo (diagonal)
void moverBispo(int passos) {
    if (passos == 0) {
        return;
    }
    for (int i = 0; i < 1; i++) { // Loop externo para "Cima"
        printf("Cima\n");
        for (int j = 0; j < 1; j++) { // Loop interno para "Direita"
            printf("Direita\n");
        }
    }
    moverBispo(passos - 1); // Chamada recursiva para alternar 
}

// Função recursiva para movimentar a rainha
void moverRainha(int passos) {
    if (passos == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(passos - 1); // Chamada recursiva
}

int main() {

    printf("Torre se move 5 casas na direção 'Direita':\n");
    printf("\n");

    // usando recursividade para a Torre
    moverTorre(5);
    printf("\n");

    printf("Bispo se move 5 casas na direção 'Cima' 'Direita' (Diagonal):\n");
    printf("\n");

    // Usando recursividade para movimentar o Bispo com loop aninhado
    moverBispo(5);
    printf("\n");

    printf("Rainha se move 8 casas na direção 'Esquerda':\n");
    printf("\n");

    // Usando recursividade para movimentar a Rainha
    moverRainha(8);
    printf("\n");

    printf("Cavalo se move 2 casas pra 'Cima' e 1 casa para 'Direita':\n");
    printf("\n");

    // Usando loops aninhados, múltiplas variáveis, e controle de fluxo com continue e break para movimentar o Cavalo
    for (int i = 1; i <= 2; i++) { // Duas casas a cima
        if (i == 2) {
            printf("Cima\n");
            continue; // Pula para a próxima iteração
        }
        printf("Cima\n");
    }

    for (int j = 1; j <= 1; j++) { // Uma casa a direita
        if (j == 1) {
            printf("Direita\n");
            break; // Encerra o loop após a primeira iteração
        }
    }

    return 0;
}