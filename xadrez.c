#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // Início do Jogo
    printf("=== ESTAMOS COMEÇANDO O DESAFIO DE XADREZ - MATECHECK ===\n\n");   


    printf("Mova a TORRE 5 casas para a direita!\n");
    
    // mover a torre 5 casas para a direita
    for (int t = 0; t < 5; t++) {
        printf("Torre - Direita\n"); // imprime a direção do movimento
    }
    

    printf("\n");


    printf("Mova o BISPO 5 casas na diagonal para cima à direita!\n");
    
    int b = 0; // variável declarada 

    while(b < 5) { // mover o bispo 5 casas na diagonal para cima à direita

        printf("Bispo - Cima à direita!\n");
        b++;
    }
    

    printf("\n");


    printf("Mova a RAINHA 8 casas para a esquerda!\n");

    int r = 1; // variável declarada

    do {
        printf("Rainha - Esquerda!\n");

        r++;
    } while (r <= 8); // mover a rainha 8 casas para a esquerda.


    printf("\n");

    printf("Fim do jogo!\n");

    return 0;
}
