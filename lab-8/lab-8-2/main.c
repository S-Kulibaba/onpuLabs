#include <stdio.h>
#include <stdlib.h>
#define MAX 16
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"rus");
    printf ("Программу написал Кулибаба Сергей\n");

    int a, b, i, j, nr, nc, sum_p, sum_n;

    printf("Введите количество строк\n");
    scanf("%d",&a);
    printf("Введите количество колонок\n");
    scanf("%d",&b);

    int arr[a][b];

    for( i = 0; i <a; i++){
        for(j = 0; j < b; j++){
            arr[i][j] = rand() %21 + (-10);
            printf("%d ",arr[i][j]);
        }
        printf(" \n");
    }
    printf(" \n");
    for(i = 0;i < a; i++){
        sum_p = 0;
        sum_n = 0;
        for(j = 0; j < b; j++){
            if(arr[i][j] > 0){
                sum_p++;
            }
            else if(arr[i][j] < 0){
                sum_n++;
            }
        }
        if(sum_p != sum_n){
            for(j = 0;j < b; j++){
                arr[i][j] = 0;
            }
        }
    }
    printf("Полученный масив:\n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

