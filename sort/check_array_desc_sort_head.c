#include "sort.h"
#include <stdio.h>
#include "../length_of_array.h"

int main () {
  int arr[] = {1,4,3,6,55,44,9,2};
  int n = ARRAY_LENGTH(arr);

  printf("original:");
  
  for(int i=0; i<n; i++){
    printf("%d, ", arr[i]);
  }

  sort_arrayint_desc(arr,n);
  printf("\n");
  printf("sorted: ");
 
  for(int i=0; i<n; i++){
    printf("%d, ", arr[i]);
  }

  printf("\n");


  
  return 0;
}
