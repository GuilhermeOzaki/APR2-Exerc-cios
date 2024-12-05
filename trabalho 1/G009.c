#include <stdio.h>

void decimalParaBinario(int N) {
    if (N > 1) {
        decimalParaBinario(N / 2);
    }
    printf("%d", N % 2);
}

int main() {
    int N;
    scanf("%d", &N);

    if (N < 0) {
        printf("Número inválido\n");
    } else {
        decimalParaBinario(N);
        printf("\n");
    }

    return 0;
}
