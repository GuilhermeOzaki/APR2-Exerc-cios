#include <stdio.h>
#include <math.h>

int main() {
    float largura, altura, custo, rendimento;
    printf("Digite a largura, altura, custo e rendimento: ");
    scanf("%f %f %f %f", &largura, &altura, &custo, &rendimento);
    int latas = ceil((largura * altura) / rendimento);
    printf("Latas necessarias: %d\nCusto total: %.2f\n", latas, latas * custo);
    return 0;
}
