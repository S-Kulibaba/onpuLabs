#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> // ������� ���������
int main() // ������� ��������
{
    setlocale (LC_ALL,"ukr"); // ���� ����������
    printf("������ ������� ������� ����� �I-222 ���i���� ����i� ����i�����\n"); // ������� ��� ����
    float a, d1, d2; // ������ �����
    printf ("\n����i�� �������� d1 =\n"); // �������� ���� �������� ��. ĳ������ 1
    scanf ("%f", &d1); // ������� �������� ����� ������� 1
    printf ("\n����i�� �������� d2 =\n"); // �������� ���� �������� ��. ĳ������ 2
    scanf ("%f", &d2); // ������� �������� ����� ������� 2
    a=sqrt(pow(d1/2,2)+pow(d2/2,2)); // ������� ���������� ������� �
    printf ("\n������� � = %1.2f\n",a); // ��������� ����������
    return 0; // �����
}
