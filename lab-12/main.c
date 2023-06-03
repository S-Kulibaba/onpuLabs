#include <stdio.h>
#include <stdlib.h>

void inputMatrix(int **matrix, int n);
int minBelowMainDiag(int **matrix, int n);
int maxBelowMainDiag(int **matrix, int n);
float avg(int a, int b);
void printResult(float result);
void freeMatrix(int **matrix, int n);

int main()
{
    printf("Created by S-Kulibaba\n");
    int n;
    int **matrix;
    int min, max;
    float result;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    inputMatrix(matrix, n);
    min = minBelowMainDiag(matrix, n);
    max = maxBelowMainDiag(matrix, n);
    result = avg(min, max);
    printResult(result);

    freeMatrix(matrix, n);
    return 0;
}

void inputMatrix(int **matrix, int n)
{
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int minBelowMainDiag(int **matrix, int n)
{
    int min = matrix[1][0];
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }
    return min;
}

int maxBelowMainDiag(int **matrix, int n)
{
    int max = matrix[1][0];
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

float avg(int a, int b)
{
    return (float)(a + b) / 2;
}

void printResult(float result)
{
    printf("Average of min and max below main diagonal: %f\n", result);
}

void freeMatrix(int **matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}
