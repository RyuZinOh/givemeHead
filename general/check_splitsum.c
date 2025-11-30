#include "./general_logics.h"
#include <stdio.h>

int main() {
  int n;
  printf(
      "enter the number to sum until its individual integer is a length one:");
  scanf("%d", &n);

  printf(" sum: %d", splitt(n));
}
