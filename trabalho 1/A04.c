#include <stdio.h>

int main() {
    char nome[50];
    float nota1, nota2;
    printf("Digite o nome do(a) aluno(a): ");
    scanf("%s", nome);
    printf("Digite duas notas: ");
    scanf("%f %f", &nota1, &nota2);
    printf("Aluno(a): %s\nMedia: %.2f\n", nome, (nota1 + nota2) / 2);
    return 0;
}
