#include <stdio.h>
#include <math.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  float division = (float) a / b;

  printf("floor %d / %d = %d\n", a, b, (int)floor(division));
  printf("ceil %d / %d = %d\n", a, b, (int)ceil(division));
  printf("round %d / %d = %d\n", a, b, (int)round(division));
  return 0;
}