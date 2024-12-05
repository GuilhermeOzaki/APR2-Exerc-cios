#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int lista[N], maior, posicao;

    for (int i = 0; i < N; i++) {
        scanf("%d", &lista[i]);
    }

    maior = lista[0];
    posicao = 0;

    for (int i = 1; i < N; i++) {
        if (lista[i] > maior) {
            maior = lista[i];
            posicao = i;
        }
    }

    printf("%d %d\n", maior, posicao);
    return 0;
}
