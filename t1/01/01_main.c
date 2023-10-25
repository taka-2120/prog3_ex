#include <stdio.h>
#include "01.h"

int main()
{
  int a = 10;
  int b = 20;
  int *min, *max;

  // min_max関数を呼び出す
  min_max(min, max, a, b);

  // 結果を出力する
  printf("min = %d, max = %d\n", min, max);

  return 0;
}