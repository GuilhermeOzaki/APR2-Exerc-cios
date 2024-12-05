#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LINE 100
#define MAX_SAMPLES 150

typedef struct {
    double sepal_length;
    double sepal_width;
    double petal_length;
    double petal_width;
    char species[20];
} Iris;

double euclidean_distance(Iris a, Iris b) {
    return sqrt(pow(a.sepal_length - b.sepal_length, 2) +
                pow(a.sepal_width - b.sepal_width, 2) +
                pow(a.petal_length - b.petal_length, 2) +
                pow(a.petal_width - b.petal_width, 2));
}

void classify(Iris *training_set, int train_size, Iris *test_sample, int k) {
    double distances[train_size];
    int indices[train_size];
    
    for (int i = 0; i < train_size; i++) {
        distances[i] = euclidean_distance(training_set[i], *test_sample);
        indices[i] = i;
    }
    
    for (int i = 0; i < train_size - 1; i++) {
        for (int j = i + 1; j < train_size; j++) {
            if (distances[i] > distances[j]) {
                double temp_dist = distances[i];
                distances[i] = distances[j];
                distances[j] = temp_dist;
                
                int temp_idx = indices[i];
                indices[i] = indices[j];
                indices[j] = temp_idx;
            }
        }
    }
    
    int species_count[3] = {0, 0, 0}; 
    for (int i = 0; i < k; i++) {
        if (strcmp(training_set[indices[i]].species, "setosa") == 0)
            species_count[0]++;
        else if (strcmp(training_set[indices[i]].species, "versicolor") == 0)
            species_count[1]++;
        else if (strcmp(training_set[indices[i]].species, "virginica") == 0)
            species_count[2]++;
    }

    if (species_count[0] >= species_count[1] && species_count[0] >= species_count[2]) {
        strcpy(test_sample->species, "setosa");
    } else if (species_count[1] >= species_count[0] && species_count[1] >= species_count[2]) {
        strcpy(test_sample->species, "versicolor");
    } else {
        strcpy(test_sample->species, "virginica");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s arquivo_entrada k\n", argv[0]);
        return 1;
    }

    int k = atoi(argv[2]);
    FILE *file = fopen(argv[1], "r");
    if (!file) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    Iris dataset[MAX_SAMPLES];
    int size = 0;

    char line[MAX_LINE];
    fgets(line, MAX_LINE, file); // Skip header
    while (fgets(line, MAX_LINE, file)) {
        sscanf(line, "%lf,%lf,%lf,%lf,%s",
               &dataset[size].sepal_length,
               &dataset[size].sepal_width,
               &dataset[size].petal_length,
               &dataset[size].petal_width,
               dataset[size].species);
        size++;
    }

    fclose(file);

    Iris test_sample = {5.9, 3.0, 5.1, 1.8, ""};
    classify(dataset, size, &test_sample, k);
    printf("Classificação: %s\n", test_sample.species);

    return 0;
}
