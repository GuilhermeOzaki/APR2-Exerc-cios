#include <stdio.h>

int validaData(int dia, int mes, int ano) {
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12) return 0;
    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) return 0;
    if (mes == 2) {
        int bissexto = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
        if (dia > (bissexto ? 29 : 28)) return 0;
    }
    return 1;
}

int main() {
    int dia, mes, ano;
    char *meses[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho",
                     "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (!validaData(dia, mes, ano)) {
        printf("DATA INVALIDA\n");
    } else {
        printf("%d de %s de %d\n", dia, meses[mes - 1], ano);
    }

    return 0;
}
