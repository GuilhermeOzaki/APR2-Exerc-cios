#include <stdio.h>

int main() {
    int N, I, X;

    scanf("%d", &N);
    int A[N + 1];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d %d", &I, &X);

    if (I < 0 || I > N) {
        printf("INVALIDO\n");
        return 0;
    }

    for (int i = N; i > I; i--) {
        A[i] = A[i - 1];
    }

    A[I] = X;

    for (int i = 0; i <= N; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}
