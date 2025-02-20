#include <stdio.h>

int main() {
    int bispo = 0;
    int torre = 0;
    // Mensagem de entrada:
    printf("Bem vindo ao jogo de xadrez\n");
    printf("Bispo movendo-se 5 casas na diagonal superior direita:\n");
 
    // Estrutura com com while:
    while (bispo < 5) { // Executa exatamente 5 movimentos
        printf("Bispo %d: cima, direita\n", bispo + 1);
        bispo++; // Incrementa o contador
    }
      
    printf("\n---------------------------------------------------\n");

    printf("Movendo-se a Torre 5 casas para a direita\n");

    do {
        printf("Torre %d: direita\n", torre + 1);
        torre++;

    } while (torre < 5);

    return 0;
    
    }

    
    
    
        //Bispo: 5 casas na diagonal superior direita
        //Torre: 5 casas para a direita
        // Rainha: 8 casas para a esquerda
