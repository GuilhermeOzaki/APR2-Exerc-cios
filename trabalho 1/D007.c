#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int lista[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &lista[i]);
    }

    for (int i = 0; i < N - 1; i += 2) {
        int temp = lista[i];
        lista[i] = lista[i + 1];
        lista[i + 1] = temp;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}
