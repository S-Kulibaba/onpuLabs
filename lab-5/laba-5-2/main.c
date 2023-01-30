#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"rus");
    printf("Код написал Кулибаба Сергей АИ 222\n");
    float a, Fx, x = 2, xk = 415, h = 23;

    printf("Введите значение a\n");

    scanf("%f", &a);

    while(x <= xk)

    {

    Fx = (sqrt(a+pow(x,3))/(a-x))+cbrtf(x);

    printf("f(%.2f) = %.2f\n", x, Fx);

    x+=h;
    }
    return 0;
}
