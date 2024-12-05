#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void calcularPlacar(int jogadas[], int numJogadas) {
    int frame = 0, pontuacaoTotal = 0, index = 0;
    char placar[100] = "";
    
    while (frame < 10) {
        if (jogadas[index] == 10) {
            pontuacaoTotal += 10 + jogadas[index + 1] + jogadas[index + 2];
            sprintf(placar + strlen(placar), "X|");
            index++;
        } else if (jogadas[index] + jogadas[index + 1] == 10) {
            pontuacaoTotal += 10 + jogadas[index + 2];
            sprintf(placar + strlen(placar), "%d/|", jogadas[index]);
            index += 2;
        } else {
            pontuacaoTotal += jogadas[index] + jogadas[index + 1];
            sprintf(placar + strlen(placar), "%d %d|", jogadas[index], jogadas[index + 1]);
            index += 2;
        }
        frame++;
    }

    printf("%s\n", placar);
    printf("%d\n", pontuacaoTotal);
}

int main() {
    int jogadas[21], numJogadas = 0;
    char input[1000];
    
    fgets(input, sizeof(input), stdin);
    
    char *token = strtok(input, " ");
    while (token != NULL) {
        jogadas[numJogadas++] = atoi(token);
        token = strtok(NULL, " ");
    }

    calcularPlacar(jogadas, numJogadas);

    return 0;
}
