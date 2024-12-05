#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

typedef struct {
    Ponto P1, P2;
} Retangulo;

int main() {
    Retangulo R;
    scanf("%f %f %f %f", &R.P1.x, &R.P1.y, &R.P2.x, &R.P2.y);

    float largura = fabs(R.P2.x - R.P1.x);
    float altura = fabs(R.P2.y - R.P1.y);

    printf("%.4f\n", largura * altura);

    return 0;
}
