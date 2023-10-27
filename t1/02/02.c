#include <stdio.h>
#include "02.h"

void point_input(point_t *p)
{
  printf("x: ");
  scanf("%lf", &p->x);
  printf("y: ");
  scanf("%lf", &p->y);
  printf("z: ");
  scanf("%lf", &p->z);
}

void mid_point(point_t *p1, point_t *p2, point_t *p)
{
  double x, y, z;
  x = (p1->x + p2->x) / 2;
  y = (p1->y + p2->y) / 2;
  z = (p1->z + p2->z) / 2;
  p->x = x;
  p->y = y;
  p->z = z;
}

void output_point(point_t *p)
{
  printf("(x, y, z) = (%lf, %lf, %lf)\n", p->x, p->y, p->z);
}