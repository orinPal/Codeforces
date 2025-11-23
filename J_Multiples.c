#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  int max = a;
  int min = b;
  if(b > max) {
    max = b;
    min = a;
  }
  
  if(max % min == 0) {
    printf("Multiples");
  } else {
    printf("No Multiples");
  }


  // int a, b;
  // scanf("%d %d", &a, &b);

  // if (a % b == 0 || b % a == 0)
  //     printf("Multiples\n");
  // else
  //     printf("No Multiples\n");

  return 0;
}