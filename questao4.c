#include <stdio.h>

int isPerfect(int numero) {
    int soma = 1; // Começamos com 1, já que todo número tem 1 como fator.
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            soma += i;
            if (i * i != numero) {
                soma += numero / i;
            }
        }
    }
    return soma == numero;
}

int main() {
    printf("Números perfeitos entre 1 e 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d = 1", i);
            for (int j = 2; j <= i; j++) {
                if (i % j == 0) {
                    printf(" + %d", j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
