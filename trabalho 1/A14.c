#include <stdio.h>

int main() {
    int num, invertido = 0;
    printf("Digite um numero de 4 digitos: ");
    scanf("%d", &num);
    while (num > 0) {
        invertido = invertido * 10 + (num % 10);
        num /= 10;
    }
    printf("Numero invertido: %d\n", invertido);
    return 0;
}
