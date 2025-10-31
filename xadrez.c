#include <stdio.h>

int main() {

    // TORRE (usa for)
    // Move 5 casas para a direita
    printf("=== TORRE ===\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    // BISPO (usa while)
    // Move 5 casas na diagonal para cima e para a direita
    printf("\n=== BISPO ===\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita %d\n", j);
        j++;
    }

    // RAINHA (usa do-while)
    // Move 8 casas para a esquerda
    printf("\n=== RAINHA ===\n");
    int k = 1;
    do {
        printf("Esquerda %d\n", k);
        k++;
    } while (k <= 8);

    return 0;
}

