#include "general_logics.h"
#include <stdio.h>


int main(){
  printf("enter the number: ");
  int n;
  scanf("%d", &n);

  if(is_armstrong(n)){
    printf("this is armstorng \n");
  }else {
    printf("this is not armstrong \n");
  }
}
