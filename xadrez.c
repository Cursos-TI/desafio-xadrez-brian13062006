#include <stdio.h>

//Atividade Nível Mestre

// Movimento da Torre 
void moverTorre(int casast) {
    if (casast > 0) {
        printf("Direita\n");
        moverTorre(casast - 1);
    }
}

// Movimento do Bispo
void moverBispo(int casasb) {
    if (casasb > 0) {
        printf("Cima, Direita\n");
        moverBispo(casasb - 1);
    }
}

// Movimento da Rainha 
void moverRainha(int casasr) {
    if (casasr > 0) {
        printf("Esquerda\n");
        moverRainha(casasr - 1);
    }
}

// Movimento do Cavalo 
void moverCavalo(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Cima, Cima, Direita\n\n");
    }
}

int main() {
    printf("Atividade Nível Mestre\n\n");
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(1);
    printf("\n");


    // Atividades Nível Básico e Intermeiário

    int t = 0, b = 0, r;
    int c = 1;
    // Cada variável recebe a inícial de seu nome ou seja: t = "Torre", b = "Bispo", r = "Rainha" e c = "Cavalo". 
    printf("\nAtividades Nível Básico e Intermediário\n");

    printf("\nPeça: Torre\n");
    while (t < 5) {
        printf("Direita\n");
        t++;
    }

    printf("\nPeça: Bispo\n");
    do {
        printf("Cima, Direita\n");
        b++;
    } while (b < 5);

    printf("\nPeça: Rainha\n");
    for(r = 0; r < 8; r++) {
        printf("Esquerda\n");
    }

    printf("\nPeça: Cavalo\n");
    while (c--)
    {
        for (int c = 0; c < 2; c++) {
            printf("Baixo, ");
        }
        printf("Direita\n");
    }
    
    return 0;
}
