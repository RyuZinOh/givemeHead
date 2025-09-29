#include "reverse.h"
#include <stdio.h>

int main (){
  char supa[] = "safallama";
  printf("original: %s", supa);
  reverse_string(supa);
  printf("\nreversed: %s\n", supa);
}
