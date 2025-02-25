#include <stdio.h>
void rainha(int passos){
    if (passos > 0) {
        printf("Esquerda\n");
        rainha(passos -1);
    }
}

void torre(int passos){
    if (passos > 0) {
        printf("Direita\n");
        torre(passos -1);
    
    }
}
 
void bispo(int passos){
    if (passos > 0) {
        printf("Cima, Direita\n");
        bispo(passos -1);
    }
}

int main() {
    
    printf("BEM VINDO AO JOGO DE XADREZ!\n\n");
    printf("Movendo-se o Bispo 5 casas na diagonal superior direita:\n");
    
    bispo(5);
    printf("\n---------------------------------------------------\n");
    printf("Movendo-se a Torre 5 casas para a direita\n");
    torre(5);
    printf("\n---------------------------------------------------\n");
    printf("Movendo-se a Rainha 8 casas para a esquerda:\n");
    rainha(8);
    printf("\n---------------------------------------------------\n");

    printf("Movendo-se o Cavalo 2 casa para cima 1 para direita:\n");

    for (int cavalo = 0; cavalo < 2; cavalo++) { // Executa 2 movimentos
        printf("Cima\n");
        
    }
        printf("Esquerda\n");

        return 0;

        printf("\n\nTODOS OS MOVIMENTOS DO NÍVEL AVENTUREIRO FORAM CONCLUÍDOS");

        printf("\n---------------------------------------------------------\n");
        
}

    
    
    //int torre = 0;
    //int cavalo = 1;
    // Mensagem de entrada: \n 2x para dar um espaçamento:
    //("BEM VINDO AO JOGO DE XADREZ!\n\n");
    //printf("Movendo-se o Bispo 5 casas na diagonal superior direita:\n");
 
    // Estrutura com while:
    //while (bispo < 5) { // Executa exatamente 5 movimentos
        //printf("Cima, direita\n");
        //bispo++; // Incrementa o contador
//}
      // Espaçamento para ter uma melhor vizualização:
    //printf("\n---------------------------------------------------\n");

    //printf("Movendo-se a Torre 5 casas para a direita\n");

        // Estrutura com com Do-while:
    //do {
       //printf("Direita\n");
        //torre++;

    //} while (torre < 5);


    //printf("\n---------------------------------------------------\n");

        // Estrutura com com For:
    //printf("Movendo-se a Rainha 5 casas para a esquerda:\n");

    //for (int rainha = 0; rainha < 5; rainha++)
    //{
        //printf("Esquerda\n");

    //}

    //printf("\n---------------------------------------------------\n");
    
    // Estrutura com loops alinhados: While e For.
    //printf("Movendo-se o Cavalo 2 casa para cima 1 para esquerda:\n");

    // (cavalo--) //Executa 1 movimentos
    //{
        //for (int cavalo = 0; cavalo < 2; cavalo++) { // Executa 2 movimentos
            //printf("Cima\n");
        //}
        //printf("Esquerda\n");
                   // Mensagem de finalização do nível aventureiro.
        //printf("\n\nTODOS OS MOVIMENTOS DO NÍVEL AVENTUREIRO FORAM CONCLUÍDOS");

        //printf("\n---------------------------------------------------------\n");
        
    //}
    

//return 0;
    
//}
    
        //Bispo: 5 casas na diagonal superior direita - Recurssivo 
        //Torre: 5 casas para a direita - Recurssivo 
        //Rainha: 8 casas para a esquerda - Recurssivo 
        //Cavalo: 2 casa para cima 1 para direita 
