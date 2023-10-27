typedef struct
{
  double x, y, z;
} point_t;

void point_input(point_t *p);
void mid_point(point_t *p1, point_t *p2, point_t *p);
void output_point(point_t *p);