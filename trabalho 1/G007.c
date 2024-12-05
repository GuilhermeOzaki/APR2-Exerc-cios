#include <stdio.h>

int main() {
    char S[100];
    int count = 0;

    fgets(S, sizeof(S), stdin);

    for (int i = 0; S[i] != '\0'; i++) {
        char c = S[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
