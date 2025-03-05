#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Declaração do tabuleiro 5x5
    int tabuleiro[5][5] = {0};
    
    // Posicionamento do navio vertical (coluna fixa, linhas variadas)
    int coluna_vertical = 2;
    for (int linha = 1; linha <= 3; linha++) {
        tabuleiro[linha][coluna_vertical] = 1;
    }
    
    // Posicionamento do navio horizontal (linha fixa, colunas variadas)
    int linha_horizontal = 4;
    for (int coluna = 1; coluna <= 3; coluna++) {
        tabuleiro[linha_horizontal][coluna] = 1;
    }
    
    // Exibição das coordenadas dos navios
    printf("Coordenadas dos navios:\n");
    
    printf("Navio Vertical:\n");
    for (int linha = 1; linha <= 3; linha++) {
        printf("(%d, %d)\n", linha, coluna_vertical);
    }
    
    printf("\nNavio Horizontal:\n");
    for (int coluna = 1; coluna <= 3; coluna++) {
        printf("(%d, %d)\n", linha_horizontal, coluna);
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
