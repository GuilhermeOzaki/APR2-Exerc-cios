#include <stdio.h>

void intercalaVetores(int A[], int N, int B[], int M, int C[]) {
    int i = 0, j = 0, k = 0;

    while (i < N && j < M) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < N) {
        C[k++] = A[i++];
    }

    while (j < M) {
        C[k++] = B[j++];
    }
}

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
    intercalaVetores(A, N, B, M, C);

    for (int i = 0; i < N + M; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
