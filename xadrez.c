#include <stdio.h>


int main() {

    int t = 0, b = 0, r;

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
    
    return 0;
}
