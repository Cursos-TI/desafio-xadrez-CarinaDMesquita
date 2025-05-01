#include <stdio.h>

void moverTorreRecursiva(int casasTorre) {
    if (casasTorre > 0) {
        printf("Torre:  Direita\n");
        moverTorreRecursiva(casasTorre - 1);
    }
}


void moverBispoRecursiva(int casasBispo) {
    if (casasBispo > 0) {
        printf("Bispo:  Cima à direita\n");
        moverBispoRecursiva(casasBispo - 1);    
    }
}


void moverRainhaRecursiva(int casasRainha) {
    if (casasRainha > 0) {
        printf("Rainha:  Esquerda\n");
        moverRainhaRecursiva(casasRainha - 1);
    }
}

int main() {

    // Início do Jogo
    printf("=== ESTAMOS COMEÇANDO O DESAFIO DE XADREZ - MATECHECK ===\n\n");   


    printf("\nMova a TORRE 5 casas para a direita!\n");
    moverTorreRecursiva(5); // Mover a Torre 5 casas para cima (recursivamente)
    
    
    printf("\nMova o BISPO 5 casas na diagonal para cima à direita!\n");

    //Loop aninhado para o movimento do Bispo
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            moverBispoRecursiva(5);  // Recursiva - Chama uma única vez com 5 passos 
        }
    }
    printf("\nMova a RAINHA 8 casas para a esquerda!\n");
    moverRainhaRecursiva(8); // // Mover a Rainha 8 casas para esquerda (recursivamente)
   
    
    printf("\nMova o CAVALO 2 casas para cima e 1 casa para a direita!\n");

    for (int i = 0; i < 3; i++) { //Loop aninhado e controle de fluxo
        for (int j = 0; j < 3; j++) {
            if (i == 2 && j == 1) {
                printf("Cavalo: Cima\n");
                printf("Cavalo: Cima\n");
                printf("Cavalo: Direita\n");
                break; // movimento completo
            }
        }
        if (i == 2) break;
    }


    printf("\nFim do jogo!\n");

    return 0;

}