#include <stdio.h>

int main() {
    int N, I;

    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &I);

    if (I < 0 || I >= N) {
        printf("INVALIDO\n");
        return 0;
    }

    for (int i = I; i < N - 1; i++) {
        A[i] = A[i + 1];
    }

    for (int i = 0; i < N - 1; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}
