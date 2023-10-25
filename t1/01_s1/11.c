#include <stdio.h>
#include <math.h>
#include "11.h"

void max_abs(int *pmax, int a, int b)
{
  int abs_a = abs(a);
  int abs_b = abs(b);

  if (abs_a >= abs_b)
  {
    *pmax = a;
  }
  else
  {
    *pmax = b;
  }
}

void sum(int *psum, int a, int b)
{
  *psum = a + b;
}

void sub(int *psub, int a, int b)
{
  *psub = a - b;
}