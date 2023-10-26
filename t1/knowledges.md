# 重要ノート

## 追記予定

- `strncpy`

## アドレスの使い方

- `int x`\
&x: xのアドレス

- `int *x`\
`x`: `x`のアドレス\
`*x`: `x`のアドレスに格納されている値

## 文字

### 文字と文字列

- 文字(1文字だけ): char x (= ASCII Code = 数字)

- 文字列 = 文字の配列: char y[]

ex:

- char x = 'a'

- char y[] = ['a', 'b', 'c', '\0']

### 文字列の扱い方

`char x[];`

`x`: `x`のアドレス or `char`型の配列

- 入力

  ``` c
  scanf("%s", x);       // 文字列(配列)を丸々入力
  scanf("%c", &x[i]);   // 文字列xのi番目の1文字(int型変数)のみ入力
  ```

  &がいらないとき: 変数の集まり(配列)か、ポインタ変数に代入するとき\
  -> `scanf`の2つ目の引数には、変数の**アドレス**を渡す必要がある

  ex: ポインタ変数に代入
  
    ``` c
    int *x;
    scanf("%d", x);
    ```

  `%c`: `char`(文字 = 1文字)\
  `%s`: `string`(文字列 = 文字の配列)

- 出力

  ``` c
  printf("%s", x);      // 文字列(char型の配列)をすべて出力
  printf("%c", x[0]);   // 1文字のみ出力
  // printf("%p", x);      // 文字列x(配列 = アドレス)のアドレスを出力
  // printf("%p", &x[i]);  // 文字列xのi番目の文字のアドレスを出力
  ```

  `%p`: `pointer`(ポインタ = アドレス)

  > [!WARNING]
  > `printf("%p", &x[i]);`
  >
  > `x`はint型の配列
  >
  > `x[i]`はint型の変数 -> "int型の配列"は"int型の変数の集まり" -> ただのint型の変数と同じ
  >
  > 変数のアドレスを表すとき -> `&`つける

## 構造体

``` c
struct typedef point
{
  double x, y, z;
} point_t;

point_t p;
p.x = 1;              // 構造体pのdouble型変数xに1を代入
scanf("%lf", &p.x);
printf("%lf", p.x);

point_t *q;
q->x = 1;             // 構造体pのdouble型変数xに1を代入
scanf("%lf", &q->x);  
printf("%lf", q->x);
```
