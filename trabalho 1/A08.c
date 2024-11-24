#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2;
    printf("Digite os dois catetos: ");
    scanf("%f %f", &cateto1, &cateto2);
    printf("Hipotenusa: %.2f\n", sqrt(cateto1 * cateto1 + cateto2 * cateto2));
    return 0;
}
