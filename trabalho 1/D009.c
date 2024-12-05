#include <stdio.h>

int main() {
    int N, I, J;

    scanf("%d", &N);

    int lista[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &lista[i]);
    }

    scanf("%d %d", &I, &J);

    if (I < 0 || J < 0 || I >= N || J >= N) {
        printf("INVALIDO\n");
    } else {
        int soma = 0;
        for (int i = I; i <= J; i++) {
            soma += lista[i];
        }
        printf("%d\n", soma);
    }

    return 0;
}
