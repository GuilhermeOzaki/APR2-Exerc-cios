#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ordenar(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char A[100], B[100];

    fgets(A, sizeof(A), stdin);
    fgets(B, sizeof(B), stdin);

    int i = 0, j = 0;

    while (A[i] != '\0') {
        if (isspace(A[i])) {
            for (int k = i; A[k] != '\0'; k++) {
                A[k] = A[k + 1];
            }
        } else {
            i++;
        }
    }

    while (B[j] != '\0') {
        if (isspace(B[j])) {
            for (int k = j; B[k] != '\0'; k++) {
                B[k] = B[k + 1];
            }
        } else {
            j++;
        }
    }

    ordenar(A);
    ordenar(B);

    if (strcmp(A, B) == 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
