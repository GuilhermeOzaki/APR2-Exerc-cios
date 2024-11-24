#include <stdio.h>

int main() {
    int eleitores, brancos, nulos, validos;
    printf("Digite o numero de eleitores, votos brancos, nulos e validos: ");
    scanf("%d %d %d %d", &eleitores, &brancos, &nulos, &validos);
    printf("Brancos: %.2f%%\n", (brancos * 100.0) / eleitores);
    printf("Nulos: %.2f%%\n", (nulos * 100.0) / eleitores);
    printf("Validos: %.2f%%\n", (validos * 100.0) / eleitores);
    printf("Ausentes: %.2f%%\n", ((eleitores - brancos - nulos - validos) * 100.0) / eleitores);
    return 0;
}
