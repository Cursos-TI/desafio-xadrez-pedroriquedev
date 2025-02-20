#include <stdio.h>

int main() {
    int bispo = 0;
    int torre = 0;
    // Mensagem de entrada: \n 2x para dar um espaçamento:
    printf("BEM VINDO AO JOGO DE XADREZ!\n\n");
    printf("Movendo-se o Bispo 5 casas na diagonal superior direita:\n");
 
    // Estrutura com while:
    while (bispo < 5) { // Executa exatamente 5 movimentos
        printf("Bispo %d: cima, direita\n", bispo + 1);
        bispo++; // Incrementa o contador
    }
      // Espaçamento para ter uma melhor vizualização:
    printf("\n---------------------------------------------------\n");

    printf("Movendo-se a Torre 5 casas para a direita\n");

        // Estrutura com com Do-while:
    do {
        printf("Torre %d: direita\n", torre + 1);
        torre++;

    } while (torre < 5);


    printf("\n---------------------------------------------------\n");

        // Estrutura com com For:
    printf("Movendo-se a Rainha 5 casas para a esquerda:\n");

    for (int rainha = 0; rainha < 5; rainha++)
    {
        printf("Rainha %d: esquerda\n", rainha + 1);

    }

return 0;
    
}
    
        //Bispo: 5 casas na diagonal superior direita
        //Torre: 5 casas para a direita
        // Rainha: 8 casas para a esquerda
