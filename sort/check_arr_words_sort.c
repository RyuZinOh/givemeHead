#include "sort.h"
#include <stdio.h>
#include "../length_of_array.h"

int main(){

  char arr[][20] = {"safal","goku","kakarot","naruto","naruhudo","mirai","nikki","kasturi"};
  int n = ARRAY_LENGTH(arr);
  printf("before quick sort: ");
  for(int i=0;i<=n-1;i++){
    printf("%s, ", arr[i]);
  }
  printf("\n");
  words_in_array_asc(arr, 0, n-1);

  printf("after quick sort: ");
  for(int i=0;i<=n-1;i++){
    printf("%s, ", arr[i]);
  }
  printf("\n");




}

