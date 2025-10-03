#include "general_logics.h"
#include <stdio.h>

int main(){
  printf("enter the number to get the factorial: ");
  int n;
  scanf("%d", &n);
  printf("the factorial of %d is %d \n", n, get_factorial(n));
}
