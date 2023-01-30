#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"rus");
    printf("Код написал Кулибаба Сергей АИ 222\n");
    float x, y;
    do{
        printf ("Введите любое отрицательное число\n");
        scanf("%f",&x);
        if (x<0) {
            y+=x;
        }
    }
    while (x!=0);
    printf ("Ваша сумма%.5f\n",y);
    return 0;
}
