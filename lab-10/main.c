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
    printf("��������� ������� ������ ��������\n");
    int NUM_STUDENTS = 5;
    struct student students[NUM_STUDENTS];
    int NUM_SCHOOLS = 5;
    int schools[NUM_SCHOOLS];

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
      printf("������� ������� ���������: ");
      scanf("%s", students[i].surname);
      printf("������� ����� �����: ");
      scanf("%d", &students[i].school_number);
      printf("������� �����: ");
      scanf("%d", &students[i].grade);
      printf("������� ������� �����: ");
      scanf("%d", &students[i].place);
    }

    printf("������� ���� ���� ������ �������� �����:\n");

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        if (students[i].place == 1 || students[i].place == 2 || students[i].place == 3)
        {
            printf("����� �%d\n", students[i].school_number);
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
  printf("����� �%d ������ ������ ����� �������� ����\n", max_school);

  return 0;
}
