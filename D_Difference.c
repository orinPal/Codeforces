#include <stdio.h>

int main() {
  long long a, b, c, d;
  scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

  long long df = (a * b) - (c * d);
  printf("Difference = %lld\n", df);

  return 0;
}