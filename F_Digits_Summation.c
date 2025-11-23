#include <stdio.h>

int main() {
  long long a, b;
  scanf("%lld %lld", &a, &b);

  long long aLastDigit = a % 10;
  long long bLastDigit = b % 10;
  if(aLastDigit < 0)
    aLastDigit = -aLastDigit;
  if(bLastDigit < 0)
    bLastDigit = -bLastDigit;
  
  long long sum = aLastDigit + bLastDigit;

  printf("%lld", sum);

  return 0;
}