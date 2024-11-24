#include <stdio.h>

int main() {
    int segundos, dias, horas, minutos;
    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    dias = segundos / 86400;
    horas = (segundos % 86400) / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = segundos % 60;
    printf("%d dias, %d horas, %d minutos, %d segundos\n", dias, horas, minutos, segundos);
    return 0;
}
