#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){

    setlocale(LC_ALL, "rus");

    float exp, n = 0, a, e, sum = 0, i = 1, n_old, e_n;

    printf ("��������� ������� ������ �������� \n\n");

    printf ("������� �������� � \n");
    scanf ("%f", &a);

    if (a > 0 && a < (1 / 2.71)) {
        while (n <= a) {
            sum += n;
            printf("n%.f = %.2f\n", i, n);
            i++;
            n = pow((1-(1/i)), i);
            if (n == a) {
                printf("\n������ n, ���� n ������ ��� ����� �");
           }
        }
        printf("\n����� = %.4f", sum);
    }
    else {
        printf("\n������");

    }

    printf("\n\n������� ����� e(0.001<e<0.0001) ");
    scanf("%f", &e_n);

    if (0.001 < e_n && e_n < 0.0001) {
        i = 2;
        n = sqrt(i + 1);
        n_old = sqrt((i + 1) - 1);
        while (fabs(n - n_old) >= e_n) {
            printf("\n%.4f", n);
            i++;
            n = pow((1-(1/i)), i);
            n_old = pow((1-(1/i)), i) - 1;
            if (fabs(n - n_old) < e_n)
            {
                printf("\n\n������ ����� � ��� ������, ���� |ni - ni-1| <= e i = %.2f, n = %.4f \n", i, n);
            }
        }
    }
    else printf("\n ������ \n");
    return 0;
}
