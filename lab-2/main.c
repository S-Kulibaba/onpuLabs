#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL, "RUS");
    printf ("����� ��������� �������� ������ ��-222\n");
    float x, y, z, a, b, b1, b2; /* ���������, �� ��������� */
    printf("\n ������� x \n"); // ��������� �������
    scanf("%f",&x); // ������� �������� �
    printf("������� y \n");
    scanf("%f",&y); //������� �������� �
    printf("������� z \n");
    scanf("%f",&z); //������� �������� z
    //������� ����������
    a = fabs(pow((z*(pow(x,2))),-1./5))-2*pow(y,5./2); //������ ���������
    b = x-(pow(z,2)/5)+(z/(x-z))+exp(-3*z); // ������ ���������
    printf("������ ��������� a = %.2f\n ������ ��������� b = %.2f",a,b);
    return 0;
}
