#include <stdio.h>
#include "02.h"

int main()
{
  point_t *p1, *p2, *mid;

  // 点p1を入力する
  input_point(p1);

  // 点p2を入力する
  input_point(p2);

  // 点p1とp2の中点を計算する
  mid_point(p1, p2, mid);

  // 中点を出力する
  output_point(p1);
  output_point(p2);
  output_point(mid);

  return 0;
}