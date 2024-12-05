#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int A[N], B[N];
    int pares = 0, impares = 0;

    for (int i = 0; i < N; i++) {
        int valor;
        scanf("%d", &valor);
        if (valor % 2 == 0) {
            A[pares++] = valor;
        } else {
            B[impares++] = valor;
        }
    }

    for (int i = 0; i < pares; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    for (int i = 0; i < impares; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
