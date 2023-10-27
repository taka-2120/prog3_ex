# T1

## 1

4限実施分

引数`a`, `b`のうち小さい方をポインタ変数`pmin`に、大きい方をポインタ変数`pmax`に格納する関数`min_max`を作成せよ。\
なお、関数`min_max`の引数はint型のポインタ変数`pmin`, `pmax`とint型の変数`a`, `b`とする。

- 01_main.c

  ``` c
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
  ```

- 01.c
  `min_max`関数の本体を記述する。

- 01.h
  `min_max`関数のプロトタイプ宣言を記述する。

## 1 改1

オリジナル

引数`a`, `b`のうち大きい方の絶対値をポインタ変数`pmax`に格納する関数`max_abs`を作成せよ。\
引数`a`, `b`のうち2つの数の和をポインタ変数`psum`に格納する関数`sum`を作成せよ。\
引数`a`, `b`のうち2つの数の差をポインタ変数`psub`に格納する関数`sub`を作成せよ。

- 11_main.c

  ``` c
  #include <stdio.h>

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
  ```

- 11.c
  `min_max`関数の本体を記述する。

- 11.h
  `min_max`関数のプロトタイプ宣言を記述する。

## 1 改2

1限実施分

個数`n`のint型の配列`x`について、相加平均を計算する関数`sum`と相乗平均を計算する関数`product`を作成せよ。\
ただし、引数はそれぞれint型の配列`x`と個数`n`とする。

- 21_main.c

  ``` c
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
  ```

- 21.c
  `sum`関数と`product`関数の本体を記述する。

- 21.h
  `sum`関数と`product`関数のプロトタイプ宣言を記述する。

## 2

4限実施分

3次元空間の2点の座標を入力する関数`point_input`を作成せよ。\
3次元空間の２点間の中点を求める関数`mid_point`を作成せよ。\
3次元空間の2点の座標を出力する関数`print_point`を作成せよ。

ただし、3次元空間の座標はpoint_t型の構造体で表すものとする。

```c
struct typedef
{
  double x, y, z;
} point_t;
```

- 02_main.c

  ``` c
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
  ```

- 02.c
  `input_point`関数と`mid_point`関数、`output_point`関数の本体を記述する。

- 02.h
  point_t型の構造体の定義を記述する。

  `input_point`関数と`mid_point`関数、`output_point`関数のプロトタイプ宣言を記述する。

## 2 改1

1限実施分

学生の情報を入力する関数 `input_student` を作成せよ。\
学生の情報を表示する関数 `print_student` を作成せよ。\

ただし、学生の情報は student_t 型の構造体で表すものとする。

```c
typedef struct
{
  char name[32];
  int age;
  double score;
} student_t;
```

- 12_main.c

  ``` c
  #include <stdio.h>
  #include "12.h"

  int main()
  {
    student_t s;

    input_student(&s);
    output_student(&s);

    return 0;
  }
  ```

- 02.c
  `input_point`関数と`mid_point`関数、`output_point`関数の本体を記述する。

- 02.h
  point_t型の構造体の定義を記述する。

  `input_point`関数と`mid_point`関数、`output_point`関数のプロトタイプ宣言を記述する。
