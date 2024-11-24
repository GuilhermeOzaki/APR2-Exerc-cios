#include <stdio.h>

int main() {
    float salario, vendas;
    printf("Digite o salario fixo e o total de vendas: ");
    scanf("%f %f", &salario, &vendas);
    printf("Total a receber: %.2f\n", salario + vendas * 0.18);
    return 0;
}
  