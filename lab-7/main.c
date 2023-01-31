#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL,"rus");
    printf ("Программу написал Кулибаба Сергей\n\n");
    int a, b, c, d; // a - тысячи, b - сотни, c - десятки, d - единицы
        for(a = 1; a < 10; a++)
            for(b = 0; b < 10; b++)
                for(c = 0; c < 10; c++)
                    for(d = 0; d < 10; d++)
                        if(a != b && b != c &&c != d && a != c && b != d && a != d)
                            printf("%d%d%d%d\n",a,b,c,d);
return 0;
}
