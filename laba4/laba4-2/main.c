#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"rus");
    printf("��� ������� �������� ������ �� 222\n");
    int num,x;
    printf("\n\t������� ����������\n\t");
    scanf("%d",&num);
    switch(num)
{
    case 1 ... 300: printf("\n\t� ��� 50 ���"); break;
    case 301  ... 1000: printf("\n\t� ��� 100 ���");break;
    case 1001 ... 5000:num=num-1000;
        num=num/100;
        x=100+(num*30);
        printf("� ��� %d ��� �� ��������",x);
    break;
    default: printf ("\n\t������ ����� ������");
}
return 0;
}
