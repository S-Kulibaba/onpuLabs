#include <stdio.h>
#include <locale.h>

void writeToFile(FILE* file, float* data, int size) {
    for (int i = 0; i < size; i++) {
        fprintf(file, "%f ", data[i]);
    }
}

void readFromFile(FILE* file, float* data, int size) {
    for (int i = 0; i < size; i++) {
        fscanf(file, "%f", &data[i]);
    }
}

void printFileContents(const char* filename) {
    FILE* file = fopen(filename, "r");
    float value;
    printf("Змiст файла %s:\n", filename);
    while (fscanf(file, "%f", &value) == 1) {
        printf("%f ", value);
    }
    printf("\n");
    fclose(file);
}

int main() {
    setlocale(LC_ALL, "UKR");

    float A[] = { 1.2, -2.5, 3.7, 4.1, -5.2 };
    int sizeA = sizeof(A) / sizeof(float);

    FILE* fileA = fopen("fileA.txt", "w");
    writeToFile(fileA, A, sizeA);
    fclose(fileA);

    FILE* fileB = fopen("fileB.txt", "w");
    writeToFile(fileB, A, 3);
    fclose(fileB);

    FILE* fileC = fopen("fileC.txt", "w");
    for (int i = 0; i < sizeA; i++) {
        if (A[i] < 0) {
            fprintf(fileC, "%f ", A[i]);
        }
    }
    fclose(fileC);

    printFileContents("fileA.txt");
    printFileContents("fileB.txt");
    printFileContents("fileC.txt");

    printf("Програма успiшно виконана.\n");

    return 0;
}

