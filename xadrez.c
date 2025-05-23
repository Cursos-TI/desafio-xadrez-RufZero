#include <stdio.h>

int main() {
    
    
    int i, j;
    

    // Movimento da Torre: 5 casas para a direita (usando for)
  
    printf("Movimento da Torre:\n");
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
   
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while(i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= 8);

    printf("\n");

    // Movimento do Cavalo: 2 casas para baixo e 1 casa para a esquerda (usando for)
  
    printf("Movimento do Cavalo:\n");

    for(i = 0; i < 2; i++){

            printf("Cima\n");

        for (j = 1; j <= i; j++)
        {
            printf("Direita\n");
            j++;
        }

    }


    return 0;
}