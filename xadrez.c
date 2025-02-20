#include <stdio.h>

int main() {
    int passos = 0; // Contador de passos

    while (passos < 6) { // Executa exatamente 5 movimentos
        printf("%d\n", passos);
        printf("cima, direita: ");
        passos++; // Incrementa o contador
    }

    return 0;
}
    
    
    
        //Bispo: 5 casas na diagonal superior direita
        //Torre: 5 casas para a direita
        // Rainha: 8 casas para a esquerda
