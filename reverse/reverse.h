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
#endif // !REVERSE
