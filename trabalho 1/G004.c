#include <stdio.h>

int main() {
    int N, M;

    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &M);
    int B[M];

    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    int C[N + M];
    int i = 0, j = 0, k = 0;

    while (i < N || j < M) {
        if (N >= M) {
            if (i < N) C[k++] = A[i++];
            if (j < M) C[k++] = B[j++];
        } else {
            if (j < M) C[k++] = B[j++];
            if (i < N) C[k++] = A[i++];
        }
    }

    for (int i = 0; i < N + M; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");

    return 0;
}
