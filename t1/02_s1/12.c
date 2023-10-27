#include <stdio.h>
#include "12.h"

void input_student(student_t *s)
{
  printf("氏名: ");
  scanf("%s", s->name);

  printf("年齢: ");
  scanf("%d", &s->age);

  printf("成績: ");
  scanf("%lf", &s->score);
}

void output_student(student_t *s)
{
  printf("氏名: %s\n", s->name);
  printf("年齢: %d\n", s->age);
  printf("成績: %.2f\n", s->score);
}