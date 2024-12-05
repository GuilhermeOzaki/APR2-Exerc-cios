#include <stdio.h>
#include <ctype.h>

int main() {
    char S[100];
    int start = 0, end;

    fgets(S, sizeof(S), stdin);

    for (end = 0; S[end] != '\0'; end++);
    end--;

    while (start < end) {
        if (isspace(S[start])) {
            start++;
        } else if (isspace(S[end])) {
            end--;
        } else if (tolower(S[start]) != tolower(S[end])) {
            printf("0\n");
            return 0;
        } else {
            start++;
            end--;
        }
    }

    printf("1\n");

    return 0;
}
