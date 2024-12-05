#include <stdio.h>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);
    int A[N][M];

    for (int i = 0; i < N * M; i++) {
        scanf("%d", &A[i / M][i % M]);
    }

    for (int j = 0; j < M; j++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += A[i][j];
        }
        printf("%d\n", sum);
    }

    return 0;
}
