#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char sexo;
    char ra[20];
    char dataIngresso[12];
    char curso[100];
} Aluno;

int main() {
    Aluno alunos[100];
    int count = 0;

    while (1) {
        Aluno a;
        fgets(a.nome, 100, stdin);
        a.nome[strcspn(a.nome, "\n")] = '\0'; // Remove o '\n'

        if (strcmp(a.nome, "FIM") == 0) break;

        scanf(" %c", &a.sexo);
        scanf("%s", a.ra);
        scanf("%s", a.dataIngresso);
        getchar(); // Consumir o '\n' após a data
        fgets(a.curso, 100, stdin);
        a.curso[strcspn(a.curso, "\n")] = '\0';

        alunos[count++] = a;
    }

    for (int i = 0; i < count; i++) {
        printf("Registro %d:\n", i + 1);
        printf("Nome: %s - Sexo: %s - RA: %s\n", 
               alunos[i].nome, 
               alunos[i].sexo == 'F' ? "Feminino" : "Masculino", 
               alunos[i].ra);
        printf("Ingresso: %s - Curso: %s\n", alunos[i].dataIngresso, alunos[i].curso);
        printf("==========\n");
    }

    return 0;
}
