#include <stdio.h>
#include "11.h"

int main()
{
  int a, b;
  int *pabs, *psum, *psub;

  // 入力を促す
  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);

  // max_abs関数を呼び出す
  max_abs(pabs, a, b);

  // sum関数を呼び出す
  sum(psum, a, b);

  // sub関数を呼び出す
  sub(psub, a, b);

  // 結果を出力する
  printf("max_abs = %d\n", max_abs);
  printf("sum = %d\n", sum);
  printf("sub = %d\n", sub);

  return 0;
}
