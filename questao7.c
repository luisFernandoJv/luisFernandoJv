#include <stdio.h>

int f(int m, int n) {
    if (n == 1) {
        return m + 1;
    } else if (m == 1) {
        return n + 1;
    } else {
        return f(m, n - 1) + f(m - 1, n);
    }
}

int main() {
    int m, n;
    printf("Digite os valores de m e n: ");
    scanf("%d %d", &m, &n);
    
    int resultado = f(m, n);
    printf("O resultado de f(%d, %d) é %d\n", m, n, resultado);
    
    return 0;
}
