#include "general_logics.h"
#include <stdio.h>

int main() {
  printf("enter the number to check prime: ");
  int n;
  scanf("%d", &n);
  int a = is_prime(n);
  if (a) {
    printf("prime number");
  } else {
    printf("not prime");
  }
}
