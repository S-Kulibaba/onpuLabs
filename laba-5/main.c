#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"rus");
    printf("��� ������� �������� ������ �� 222\n");
    float x, y;
    do{
        printf ("������� ����� ������������� �����\n");
        scanf("%f",&x);
        if (x<0) {
            y+=x;
        }
    }
    while (x!=0);
    printf ("���� �����%.5f\n",y);
    return 0;
}
