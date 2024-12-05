#include <stdio.h>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);
    int A[N][M], B[M][N];

    for (int i = 0; i < N * M; i++) {
        scanf("%d", &A[i / M][i % M]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            B[j][i] = A[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
