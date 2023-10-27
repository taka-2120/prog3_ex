#include <stdio.h>

typedef struct
{
  char name[32];
  int age;
  double score;
} student_t;

void input_student(student_t *s);

void output_student(student_t *s);