#include <stdio.h>

int main() {
    char S[100], C;
    int count = 0;

    fgets(S, sizeof(S), stdin);
    scanf("%c", &C);

    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] == C) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
