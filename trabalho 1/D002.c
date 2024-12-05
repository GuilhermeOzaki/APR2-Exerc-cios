#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int lista[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &lista[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}
