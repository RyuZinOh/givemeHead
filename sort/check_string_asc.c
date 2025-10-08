#include <stdio.h>
#include "sort.h"

int main(){
  char str[] = "safallama";
  printf("%s\n",str);
  sort_string_asc(str);
  printf("%s\n", str);

}
