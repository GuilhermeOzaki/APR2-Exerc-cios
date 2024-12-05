#include <stdio.h>

int main() {
    int N, X;

    scanf("%d", &N);

    int A[N], B[N], k = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &X);

    for (int i = 0; i < N; i++) {
        if (A[i] > X) {
            B[k++] = A[i];
        }
    }

    for (int i = 0; i < k; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
