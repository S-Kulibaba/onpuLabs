#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
    float a, x, y;
    setlocale(LC_ALL, "rus");
    printf("Роботу выполнил Кулибаба Сергей АИ-222\n");
    printf("a=");
    scanf("%f", &a);
    printf("x=");
    scanf("%f", &x);
    if (fabs(a)+4==x)
        y = a+1;
    else if (fabs(a)+4<x)
        y = x/2;
    else y = x*a;
 printf("------------------------------\n| x | y |\n------------------------------\n");
        printf("| %.2f | %.2f |\n",x,y);

    return 0;
}
