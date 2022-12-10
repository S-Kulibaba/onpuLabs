#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"rus");
    printf("Код написал Кулибаба Сергей АИ 222\n");
    int num,x;
    printf("\n\tВведите расстояние\n\t");
    scanf("%d",&num);
    switch(num)
{
    case 1 ... 300: printf("\n\tС вас 50 грн"); break;
    case 301  ... 1000: printf("\n\tС вас 100 грн");break;
    case 1001 ... 5000:num=num-1000;
        num=num/100;
        x=100+(num*30);
        printf("С вас %d грн за доставку",x);
    break;
    default: printf ("\n\tОшибка ввода данных");
}
return 0;
}
