#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compactar(const char *arquivoEntrada, const char *arquivoSaida) {
    FILE *entrada = fopen(arquivoEntrada, "r");
    FILE *saida = fopen(arquivoSaida, "w");

    if (!entrada || !saida) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    char buffer[100];
    fgets(buffer, sizeof(buffer), entrada);
    fprintf(saida, "P8\n");

    do {
        if (buffer[0] == '#') {
            fgets(buffer, sizeof(buffer), entrada);
        } else {
            fprintf(saida, "%s", buffer);
            break;
        }
    } while (1);

    fgets(buffer, sizeof(buffer), entrada);
    fprintf(saida, "%s", buffer);

    int valorAtual, valorAnterior, count = 1;
    fscanf(entrada, "%d", &valorAnterior);

    while (fscanf(entrada, "%d", &valorAtual) != EOF) {
        if (valorAtual == valorAnterior) {
            count++;
        } else {
            if (count > 3) {
                fprintf(saida, "@ %d %d ", valorAnterior, count);
            } else {
                for (int i = 0; i < count; i++) {
                    fprintf(saida, "%d ", valorAnterior);
                }
            }
            valorAnterior = valorAtual;
            count = 1;
        }
    }

    if (count > 3) {
        fprintf(saida, "@ %d %d ", valorAnterior, count);
    } else {
        for (int i = 0; i < count; i++) {
            fprintf(saida, "%d ", valorAnterior);
        }
    }

    fclose(entrada);
    fclose(saida);
}

void descompactar(const char *arquivoEntrada, const char *arquivoSaida) {
    FILE *entrada = fopen(arquivoEntrada, "r");
    FILE *saida = fopen(arquivoSaida, "w");

    if (!entrada || !saida) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    char buffer[100];
    fgets(buffer, sizeof(buffer), entrada);
    fprintf(saida, "P2\n");

    do {
        if (buffer[0] == '#') {
            fgets(buffer, sizeof(buffer), entrada);
        } else {
            fprintf(saida, "%s", buffer);
            break;
        }
    } while (1);

    fgets(buffer, sizeof(buffer), entrada);
    fprintf(saida, "%s", buffer);

    char identificador;
    int valor, count;
    while (fscanf(entrada, " %c", &identificador) != EOF) {
        if (identificador == '@') {
            fscanf(entrada, "%d %d", &valor, &count);
            for (int i = 0; i < count; i++) {
                fprintf(saida, "%d ", valor);
            }
        } else {
            ungetc(identificador, entrada);
            fscanf(entrada, "%d", &valor);
            fprintf(saida, "%d ", valor);
        }
    }

    fclose(entrada);
    fclose(saida);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: ./runlength <arquivo_entrada> <arquivo_saida>\n");
        return 1;
    }

    FILE *entrada = fopen(argv[1], "r");
    if (!entrada) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    char formato[3];
    fgets(formato, sizeof(formato), entrada);
    fclose(entrada);

    if (strcmp(formato, "P2") == 0) {
        compactar(argv[1], argv[2]);
    } else if (strcmp(formato, "P8") == 0) {
        descompactar(argv[1], argv[2]);
    } else {
        printf("Formato de arquivo inválido.\n");
        return 1;
    }

    return 0;
}
