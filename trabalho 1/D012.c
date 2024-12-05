#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int lista[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &lista[i]);
    }

    int menor = lista[0], maior = lista[0];
    int pos_menor = 0, pos_maior = 0;

    for (int i = 1; i < N; i++) {
        if (lista[i] < menor) {
            menor = lista[i];
            pos_menor = i;
        }
        if (lista[i] > maior) {
            maior = lista[i];
            pos_maior = i;
        }
    }

    int temp = lista[0];
    lista[0] = menor;
    lista[pos_menor] = temp;

    temp = lista[N - 1];
    lista[N - 1] = maior;
    lista[pos_maior] = temp;

    for (int i = 0; i < N; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}
