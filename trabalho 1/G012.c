#include <stdio.h>

char complemento(char nucleotideo) {
    switch (nucleotideo) {
        case 'A': return 'T';
        case 'T': return 'A';
        case 'C': return 'G';
        case 'G': return 'C';
        default: return '\0';
    }
}

int main() {
    char dna[100];
    scanf("%s", dna);

    printf("Fita Original: %s\n", dna);
    printf("Fita Complementar: ");
    for (int i = 0; dna[i] != '\0'; i++) {
        printf("%c", complemento(dna[i]));
    }
    printf("\n");

    return 0;
}
