#include <stdio.h>

int main() {
    unsigned long long fatorial = 1;
    int n, i;

    printf("DIGITE UM NUMERO POSITIVO: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O NUMERO PRECISA SER POSITIVO\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %llu\n", n, fatorial);

    return 0;
}
