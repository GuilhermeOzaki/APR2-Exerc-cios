#include <stdio.h>

int main() {
    float massa, altura;
    printf("Digite a massa em kg e a altura em metros: ");
    scanf("%f %f", &massa, &altura);
    printf("IMC: %.2f\n", massa / (altura * altura));
    return 0;
}
