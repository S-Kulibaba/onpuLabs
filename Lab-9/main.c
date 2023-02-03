#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    char string[100];
    int i, count = 0, word_length = 0;

    printf("Введите строку: ");
    gets(string);

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] != ' ' && string[i] != '\0')
        {
        word_length++;
        }
    else
    {
        if (word_length > 3)
        {
            count++;
        }
        word_length = 0;
    }
    }

    if (word_length >= 3)
    {
        count++;
    }

    printf("Количество слов в которых больше 3 букв: %d\n", count);

    int word_number = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == ' ' || string[i] == '\n')
        {
            word_number++;
        }
        else if (word_number % 2 == 1 && string[i] == 'e')
        {
            count++;
        }
    }

    printf("Количество букв 'e' в нечетных словах: %d\n", count);

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'е')
        {
        string[i] = 'А';
        }
    }

    printf("%s\n", string);

return 0;
}

