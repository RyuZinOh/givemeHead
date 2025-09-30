#ifndef REVERSE
#define REVERSE

#include <string.h>

static inline void reverse_string(char *str){
  if(!str) return;

  int  len = (int)strlen(str);

  for (int i =0 ; i<len/2; i++){
    char temp= str[i];
    str[i] = str[len-i-1];
    str[len-i-1] = temp;
  }
}


static inline void reverse_array(int *arr, int n){
  if (!arr) return;

  for(int i=0; i<n/2; i++){
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
  }

}
#endif // !REVERSE
