#include <stdio.h>
#include <stdlib.h>

int main() {
    printf ("Created by S-Kulibaba\n");
    int N, K, i, count = 0;
    float sum = 0, avg;
    printf("Enter N: ");
    scanf("%d", &N);
    int *A = (int*)malloc(N * sizeof(int));
    printf("Enter the array A:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        sum += A[i];
    }
    avg = sum / N;
    printf("Average value: %.2f\n", avg);
    printf("Enter K: ");
    scanf("%d", &K);
    for (i = 0; i < N; i++) {
        if (A[i] > avg) {
            count++;
            if (count >= K) {
                printf("Index of elements that are greater than average: ");
                break;
            }
        }
    }
    if (count >= K) {
        for (i = 0; i < N; i++) {
            if (A[i] > avg) {
                printf("%d ", i);
            }
        }
    }
    else {
        printf("There are less than %d elements that are greater than average.", K);
    }
    free(A);
    return 0;
}
