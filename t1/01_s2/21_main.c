#include <stdio.h>
#include "21.h"

int main()
{
  double x[] = {1, 2, 3, 4, 5};
  int n = sizeof(x) / sizeof(x[0]);

  // 相加平均
  double sum_avg = sum(x, n) / n;
  printf("相加平均 = %.02f\n", sum_avg);

  // 相乗平均
  double product_avg = sqrt(product(x, n));
  printf("相乗平均 = %.02f\n", product_avg);

  return 0;
}
