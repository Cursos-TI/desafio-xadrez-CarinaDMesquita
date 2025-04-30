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

    
    int cavalo = 1; //variável declarada para executar o loop.

    // Início do Jogo
    printf("=== ESTAMOS COMEÇANDO O DESAFIO DE XADREZ - MATECHECK ===\n\n");   


    printf("\nMova a TORRE 5 casas para a direita!\n");
    
    // estrutura de repetição for;  
    for (int torre = 0; torre < 5; torre++) { // mover a torre 5 casas para a direita 
        printf("Torre - Direita\n"); // imprime a direção do movimento
    }
    

    printf("\nMova o BISPO 5 casas na diagonal para cima à direita!\n");
    
    int bispo = 0; // variável declarada 

    // estrutura de repetição while
    while(bispo < 5) { // mover o bispo 5 casas na diagonal para cima à direita

        printf("Bispo - Cima à direita!\n");
        bispo++;
    }
    

    printf("\nMova a RAINHA 8 casas para a esquerda!\n");

    int rainha = 1; // variável declarada

    // estrutura de repetição do-while
    do {
        printf("Rainha - Esquerda!\n");

        rainha++;
    } while (rainha <= 8); // mover a rainha 8 casas para a esquerda.



    printf("\nMova o CAVALO 2 casas para baixo e 1 casa para a esquerda!\n");

    do {  //loops aninhados do-while e for
        for (int i = 0; i < 2; i++) { // mover o cavalo 2 casas para baixo e 1 casa para a esquerda.
            printf("Cavalo - Baixo\n");
        }
        printf("Cavalo - Esquerda\n");
    } while (--cavalo); // --cavalo → vai decrementar primeiro e depois testar se o valor ainda é diferente de 0.
    

    printf("\nFim do jogo!\n");
    
    return 0;
}