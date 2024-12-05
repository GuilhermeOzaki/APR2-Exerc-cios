#include <stdio.h>

int main() {
    int N, X, contagem = 0;

    scanf("%d", &N);

    int lista[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &lista[i]);
    }

    scanf("%d", &X);

    for (int i = 0; i < N; i++) {
        if (lista[i] == X) {
            contagem++;
        }
    }

    printf("%d\n", contagem);
    return 0;
}
