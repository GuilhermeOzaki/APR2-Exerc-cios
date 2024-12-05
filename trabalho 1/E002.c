#include <stdio.h>
#include <string.h>

int main() {
    char S[100];

    fgets(S, sizeof(S), stdin);

    int length = strlen(S);

    for (int i = length - 2; i >= 0; i--) {
        printf("%c ", S[i]);
    }
    printf("\n");

    return 0;
}
