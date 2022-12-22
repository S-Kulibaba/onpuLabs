#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL, "RUS");
    printf ("Автор программы Кулибаба Сергей АИ-222\n");
    float x, y, z, a, b, b1, b2; /* параметри, які вводяться */
    printf("\n Введите x \n"); // виведення підказки
    scanf("%f",&x); // введите значение х
    printf("Введите y \n");
    scanf("%f",&y); //введите значение у
    printf("Введите z \n");
    scanf("%f",&z); //введите значение z
    //рассчет результата
    a = fabs(pow((z*(pow(x,2))),-1./5))-2*pow(y,5./2); //первое уравнение
    b = x-(pow(z,2)/5)+(z/(x-z))+exp(-3*z); // второе уравнение
    printf("Первое уравнение a = %.2f\n Второе уравнение b = %.2f",a,b);
    return 0;
}
