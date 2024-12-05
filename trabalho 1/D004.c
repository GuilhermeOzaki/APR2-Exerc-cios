#include <stdio.h>

int main() {
    int N, X;

    scanf("%d", &N);

    int lista[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &lista[i]);
    }

    scanf("%d", &X);

    int posicao = -1;

    for (int i = 0; i < N; i++) {
        if (lista[i] == X) {
            posicao = i;
            break;
        }
    }

    printf("%d\n", posicao);
    return 0;
}
