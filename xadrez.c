#include <stdio.h>

    // Função recursiva para o movimento da Torre (Direita)

void movimentoTorre(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Direita\n");
    movimentoTorre(casas - 1);
}

    // Função recursiva para o movimento do Bispo (Diagonal: Cima e Direita)

void movimentoBispo(int casas) {
    if (casas == 0) {
        return;
    }

    // Loops aninhados para simular o movimento diagonal

    for (int v = 1; v <= 1; v++) {  // Movimento vertical (Cima)
        for (int h = 1; h <= 1; h++) {  // Movimento horizontal (Direita)
            printf("Cima, Direita\n");
        }
    }

    movimentoBispo(casas - 1);
}

    // Função recursiva para o movimento da Rainha (Esquerda)

void movimentoRainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Esquerda\n");
    movimentoRainha(casas - 1);
}

   // Movimento do Cavalo (em "L": 2 para cima, 1 para direita) usando loops aninhados

void movimentoCavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");
    
    int cima, direita;

    for (cima = 1; cima <= movimentos; cima++) {
        for (direita = 1; direita <= movimentos; direita++) {

            // Simula o movimento do cavalo: 2 pra cima e 1 pra direita
            if (cima == 2 && direita == 1) {
                printf("Cima, Cima, Direita\n");
                continue; // Continua verificando outras possibilidades
            }

            // Ignora movimentos que não sejam parte do "L"
            if (cima != 2 || direita != 1) {
                continue;
            }
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    movimentoTorre(5);

    printf("\nMovimento do Bispo:\n");
    movimentoBispo(5);

    printf("\nMovimento da Rainha:\n");
    movimentoRainha(8);

    printf("\n");
    movimentoCavalo(2);

    printf("\n");

    return 0;
}
    