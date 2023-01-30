#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"rus");
    printf("Код написал Кулибаба Сергей АИ 222\n");
    int num;
    printf("\n\tВведите силу ветра\n\t");
    scanf("%d",&num);
    switch(num)
{
case 1 ... 4: printf("\n\tСлабый ветер"); break;
case 5  ... 8: printf("\n\tСредний ветер");break;
case 9 ... 18: printf("\n\tСильный ветер");break;
}
if(num>=19)
    {
        printf("Ураган! Прячься!");
    }
    else if(num<=0)
    {
        printf("На море штиль");
    }
    getch();
    return 0;
    }
