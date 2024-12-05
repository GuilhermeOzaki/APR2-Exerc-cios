#include <stdio.h>

int main() {
    float temperaturas[7], soma = 0, media;
    int dias_acima_media = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    media = soma / 7;

    for (int i = 0; i < 7; i++) {
        if (temperaturas[i] > media) {
            dias_acima_media++;
        }
    }

    printf("%d\n", dias_acima_media);
    return 0;
}
