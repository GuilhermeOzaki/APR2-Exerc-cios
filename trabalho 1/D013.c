#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int A[N], B[N], C[2 * N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    int j = 0;
    for (int i = 0; i < N; i++) {
        C[j++] = A[i];
        C[j++] = B[i];
    }

    for (int i = 0; i < 2 * N; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
