#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL,"rus");
    printf ("Программу написал Кулибаба Сергей\n");

    int a, b, i, j;
    float sum, arif, max;
    printf("Введите количество строк\n");
    scanf("%d",&a);
    printf("Введите количество колонок\n");
    scanf("%d",&b);

    int arr[a][b];

        for( i = 0; i <a; i++){
            for(j = 0; j < b; j++){
                arr[i][j] = rand() %10;
                printf("%d ",arr[i][j]);
            }
            printf(" \n");
        }
        printf(" \n");

        for( i = 0; i <b; i++)
            {
            for( j = 0; j < a; j++)
            {
              sum += arr[j][i];
            }
            printf ("Сумма: %.2f\n",sum);
            arif = sum/b;
            printf ("Среднее арифметическое %d столбца: %.2f\n\n",i+1, arif);
            sum = 0;
            }
         max = arr[0][b-1];
            for(i = 0; i < b; i++){
                for(j = 0; j < b; j++){
                    if(b == i + j + 1){
                        if(max < arr[i][j]){
                            max = arr[i][j];
                        }
                    }
                }
            }
    printf("Максимальный элемент побочной диагонали - %0.2f\n", max);

    return 0;
}
