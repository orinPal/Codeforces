#include <stdio.h>

int main() {
  long long a, b, c;
  scanf("%lld %lld %lld", &a, &b, &c);

  long long max = a;
  long long min = a;
  
  if(b > max) max = b;
  if(c > max) max = c;

  if(b < min) min = b;
  if(c < min) min = c;

  printf("%lld %lld", min, max);
  return 0;
}