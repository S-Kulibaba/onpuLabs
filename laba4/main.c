#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"rus");
    printf("��� ������� �������� ������ �� 222\n");
    int num;
    printf("\n\t������� ���� �����\n\t");
    scanf("%d",&num);
    switch(num)
{
case 1 ... 4: printf("\n\t������ �����"); break;
case 5  ... 8: printf("\n\t������� �����");break;
case 9 ... 18: printf("\n\t������� �����");break;
}
if(num>=19)
    {
        printf("������! �������!");
    }
    else if(num<=0)
    {
        printf("�� ���� �����");
    }
    getch();
    return 0;
    }
