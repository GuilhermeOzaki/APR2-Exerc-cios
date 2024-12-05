#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

int main() {
    Ponto P1, P2;
    scanf("%f %f %f %f", &P1.x, &P1.y, &P2.x, &P2.y);

    float distancia = sqrt(pow(P2.x - P1.x, 2) + pow(P2.y - P1.y, 2));
    printf("%.4f\n", distancia);

    return 0;
}
