#include "./general_logics.h"
#include <stdbool.h>
#include <stdio.h>
int main() {
  int n;
  printf("enter a number ");
  scanf("%d", &n);

  if (is_palindrome(n)) {
    printf("%d is palindrome\n", n);
  } else {
    printf("%d isnt a palindrome\n", n);
  }
}
