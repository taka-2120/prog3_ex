#include <stdio.h>
#include "21.h"

double sum(double *x, int n)
{
  double sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += x[i];
  }

  return sum;
}

double product(double *x, int n)
{
  double product = 1;

  for (int i = 0; i < n; i++)
  {
    product *= x[i];
  }

  return product;
}
