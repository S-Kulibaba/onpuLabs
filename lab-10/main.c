#include <stdio.h>
#include <string.h>
#include <locale.h>
struct student {
  char surname[5];
  int school_number;
  int grade;
  int place;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("Программу написал Сергей Кулибаба\n");
    int NUM_STUDENTS = 5;
    struct student students[NUM_STUDENTS];
    int NUM_SCHOOLS = 5;
    int schools[NUM_SCHOOLS];

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
      printf("Введите фамилию участника: ");
      scanf("%s", students[i].surname);
      printf("Введите номер школы: ");
      scanf("%d", &students[i].school_number);
      printf("Введите класс: ");
      scanf("%d", &students[i].grade);
      printf("Введите занятое место: ");
      scanf("%d", &students[i].place);
    }

    printf("Ученики этих школ заняли призовые места:\n");

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        if (students[i].place == 1 || students[i].place == 2 || students[i].place == 3)
        {
            printf("Школа №%d\n", students[i].school_number);
        }
    }

    int max_school = -1;
    int max_prizes = 0;
    for (int i = 0; i < NUM_SCHOOLS; i++)
    {
        if (schools[i] > max_prizes)
        {
            max_prizes = schools[i];
            max_school = i + 1;
        }
  }
  printf("Школа №%d заняла больше всего призовых мест\n", max_school);

  return 0;
}
