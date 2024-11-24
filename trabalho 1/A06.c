#include <stdio.h>

int main() {
    float valor, desconto;
    printf("Digite o valor total e o desconto: ");
    scanf("%f %f", &valor, &desconto);
    printf("Valor com desconto: %.2f\n", valor * (1 - desconto / 100));
    return 0;
}
