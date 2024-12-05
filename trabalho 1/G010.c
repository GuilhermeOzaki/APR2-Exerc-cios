#include <stdio.h>
#include <string.h>

int binarioParaDecimal(const char *binario) {
    int decimal = 0, base = 1;

    for (int i = strlen(binario) - 1; i >= 0; i--) {
        if (binario[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    return decimal;
}

int main() {
    char binario[33];
    scanf("%s", binario);

    printf("%d\n", binarioParaDecimal(binario));
    return 0;
}
