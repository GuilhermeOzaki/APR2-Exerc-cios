#include <stdio.h>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);
    int A[N][M];

    for (int i = 0; i < N * M; i++) {
        scanf("%d", &A[i / M][i % M]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
