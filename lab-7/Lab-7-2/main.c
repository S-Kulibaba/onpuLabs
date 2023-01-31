#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>
int main(){
    setlocale(LC_ALL,"rus");
    printf ("Программу написал Кулибаба Сергей\n\n");
    int k, i, n, fact = 1;
    float a, b, p, sum = 0;
    printf("Bведите k\n");
    scanf("%d",&k);

    for(n=-3;n<=k;n++) {
        if (n!=-3){
        a=(n+2)*(fabs(n-9));
        b=(n+3);
        }
    }

    printf("a=%.2f  b=%.2f\n",a,b);

    for(i=1;i<=b;i++){
    fact=fact*i;
    }

    printf("Факториал %.2f это: %d\n",b,fact);
    p=a/fact;
    printf("\n p = %0.2f ",p);
return 0;
}


