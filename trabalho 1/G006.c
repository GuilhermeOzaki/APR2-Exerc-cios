#include <stdio.h>

int main() {
    char S[100];
    int i = 0;

    fgets(S, sizeof(S), stdin);

    while (S[i] != '\0') {
        i++;
    }

    printf("%d\n", i - 1);

    return 0;
}
