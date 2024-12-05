#include <stdio.h>

int main() {
    int N, X;

    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &X);

    int newSize = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] != X) {
            A[newSize++] = A[i];
        }
    }

    for (int i = 0; i < newSize; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}
