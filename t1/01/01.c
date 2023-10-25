#include <stdio.h>
#include "01.h"

void min_max(int *pmin, int *pmax, int a, int b)
{
  if (a <= b)
  {
    *pmin = a;
    *pmax = b;
  }
  else
  {
    *pmin = b;
    *pmax = a;
  }
}