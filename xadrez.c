#include <stdio.h>

int main() {
    int bispo = 0;
    int torre = 0;
    int cavalo = 1;
    // Mensagem de entrada: \n 2x para dar um espaçamento:
    printf("BEM VINDO AO JOGO DE XADREZ!\n\n");
    printf("Movendo-se o Bispo 5 casas na diagonal superior direita:\n");
 
    // Estrutura com while:
    while (bispo < 5) { // Executa exatamente 5 movimentos
        printf("Cima, direita\n");
        bispo++; // Incrementa o contador
    }
      // Espaçamento para ter uma melhor vizualização:
    printf("\n---------------------------------------------------\n");

    printf("Movendo-se a Torre 5 casas para a direita\n");

        // Estrutura com com Do-while:
    do {
        printf("Direita\n");
        torre++;

    } while (torre < 5);


    printf("\n---------------------------------------------------\n");

        // Estrutura com com For:
    printf("Movendo-se a Rainha 5 casas para a esquerda:\n");

    for (int rainha = 0; rainha < 5; rainha++)
    {
        printf("Esquerda\n");

    }

    printf("\n---------------------------------------------------\n");
    
    // Estrutura com loops alinhados: While e For.
    printf("Movendo-se o Cavalo 2 casa para cima 1 para esquerda:\n");

    while (cavalo--) //Executa 1 movimentos
    {
        for (int cavalo = 0; cavalo < 2; cavalo++) { // Executa 2 movimentos
            printf("Cima\n");
        }
        printf("Esquerda\n");
                   // Mensagem de finalização do nível aventureiro.
        printf("\n\nTODOS OS MOVIMENTOS DO NÍVEL AVENTUREIRO FORAM CONCLUÍDOS");

        printf("\n---------------------------------------------------------\n");
        
    }
    

return 0;
    
}
    
        //Bispo: 5 casas na diagonal superior direita
        //Torre: 5 casas para a direita
        // Rainha: 8 casas para a esquerda
        // Cavalo: 2 casa para cima 1 para esquerda
