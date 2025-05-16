#include <stdio.h>

void moverTorre(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Direita\n");
    }
}

void moverBispo(int casas) {
    int i = 0;
    while (i < casas) {
        printf("Cima, Direita\n");
        i++;
    }
}

void moverRainha(int casas) {
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casas);
}

void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    printf("Esquerda\n");
}

void moverCavaloAvancado() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");
}

int main() {
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);
    
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    moverBispo(5);
    
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);
    
    printf("\nMovimento do Cavalo (2 para baixo, 1 para a esquerda):\n");
    moverCavalo();
    
    printf("\nMovimento Avançado do Cavalo (2 para cima, 1 para a direita):\n");
    moverCavaloAvancado();
    
    return 0;
}
