#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    printf("Divisao real: %.2f\n", (float)num1 / num2);
    printf("Divisao inteira: %d\n", num1 / num2);
    printf("Resto: %d\n", num1 % num2);
    return 0;
}
