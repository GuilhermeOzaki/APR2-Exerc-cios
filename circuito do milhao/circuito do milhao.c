#include <stdio.h>
#include <stdlib.h>

int encontrarXesimaEliminada(int N, int X) {
    int *pessoas = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        pessoas[i] = i + 1;
    }

    int eliminados = 0, index = 1, xesimaEliminada = -1;
    while (eliminados < N - 1) {
        if (pessoas[index] != 0) {
            eliminados++;
            if (eliminados == X) {
                xesimaEliminada = pessoas[index];
            }
            pessoas[index] = 0;
        }

        do {
            index = (index + 1) % N;
        } while (pessoas[index] == 0);
    }

    free(pessoas);
    return xesimaEliminada;
}

int encontrarGanhador(int N) {
    int ganhador = 0;
    for (int i = 2; i <= N; i++) {
        ganhador = (ganhador + 2) % i;
    }
    return ganhador + 1;
}

int main() {
    int N, X;

    printf("Digite o número de pessoas (N): ");
    scanf("%d", &N);
    printf("Digite o número da x-ésima eliminação (X): ");
    scanf("%d", &X);

    int xesimaEliminada = encontrarXesimaEliminada(N, X);
    int ganhador = encontrarGanhador(N);

    printf("A %dª pessoa eliminada: %d\n", X, xesimaEliminada);
    printf("O ganhador do prêmio: %d\n", ganhador);

    return 0;
}
