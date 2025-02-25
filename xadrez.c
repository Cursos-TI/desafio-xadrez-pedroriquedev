#include <stdio.h>
// Movimentos das peças Bispo, Torre e Rainha com a função recurssiva.
//Movimento da rainha 8 casas para a esquerda..
void rainha(int passos){
    if (passos > 0) {
        printf("Esquerda\n");
        rainha(passos -1);
    }
}
//Movimento da torre 5 casas para a direita.
void torre(int passos){
    if (passos > 0) {
        printf("Direita\n");
        torre(passos -1);
    
    }
}
 //Movimento do bispo 5 casas na diagonal superior direita.
void bispo(int passos){
    if (passos > 0) {
        printf("Cima, Direita\n");
        bispo(passos -1);
    }
}
// printf para funcionar corretamente ele tem que esta dentro do "int maina"
int main() {
    
    printf("BEM VINDO AO JOGO DE XADREZ!\n\n");
    printf("\n---------------------------------------------------\n");
    
    printf("Movendo-se o Bispo 5 casas na diagonal superior direita:\n");
    bispo(5);
    printf("\n---------------------------------------------------\n");
   
    printf("Movendo-se a Torre 5 casas para a direita:\n");
    torre(5);
    printf("\n---------------------------------------------------\n");
    
    printf("Movendo-se a Rainha 8 casas para a esquerda:\n");
    rainha(8);
    printf("\n---------------------------------------------------\n");
    
    printf("Movendo-se o Cavalo 2 casa para cima 1 para direita:\n");

    for (int cavalo = 0; cavalo < 2; cavalo++) { // Executa 2 movimentos
        printf("Cima\n");
        
    }
        printf("Direita\n");

        printf("\n\nTODOS OS MOVIMENTOS DO NÍVEL AVENTUREIRO FORAM CONCLUÍDOS");
        printf("\n---------------------------------------------------------\n");
        

        return 0;
}

    
        //Bispo: 5 casas na diagonal superior direita - Recurssivo 
        //Torre: 5 casas para a direita - Recurssivo 
        //Rainha: 8 casas para a esquerda - Recurssivo 
        //Cavalo: 2 casa para cima 1 para direita 
