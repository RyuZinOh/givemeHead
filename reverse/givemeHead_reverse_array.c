#include "reverse.h"
#include <stdio.h>
#include "../length_of_array.h"

int  main(){
  int arr[] = {1,2,3,4,5};
  // int n = sizeof(arr) / sizeof(arr[1]); //int takes 4 bits so overall, array bit will be sum of every bit there, and diving by any bit will be able to deduce the total array legth
 
  //using macro instead as a replacment
  int n = ARRAY_LENGTH(arr); //basically this one replaces the thing with our stuff 
  reverse_array(arr, n);

  for(int i=0; i<n; i++){
    printf("%d \n", arr[i]);
  }

  
}
