#include <stdio.h>

int main() {
  
  double r;
  const double pi = 3.141592653;
  scanf("%lf", &r);
  double area = pi * r * r;

  printf("%.9lf\n", area);
  return 0;
}