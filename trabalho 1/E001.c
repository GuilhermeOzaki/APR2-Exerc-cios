#include <stdio.h>

int main() {
    char S[100];

    fgets(S, sizeof(S), stdin);

    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] != '\n') {
            printf("%c ", S[i]);
        }
    }
    printf("\n");

    return 0;
}
