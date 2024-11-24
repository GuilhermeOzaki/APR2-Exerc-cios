#include <stdio.h>

int main() {
    float nota1, nota2;
    printf("Digite duas notas: ");
    scanf("%f %f", &nota1, &nota2);
    printf("Media: %.2f\n", (nota1 + nota2) / 2);
    return 0;
}
