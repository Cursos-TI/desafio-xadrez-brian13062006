#include <stdio.h>


int main() {

    int t = 0, b = 0, r;
    int c = 1;
    // Cada variável recebe a inícial de seu nome ou seja: t = "Torre", b = "Bispo", r = "Rainha" e c = "Cavalo". 

    printf("Peça: Torre\n");
   
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


    //Movimento Cavalo
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
