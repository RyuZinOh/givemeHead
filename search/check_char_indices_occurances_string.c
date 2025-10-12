#include "search.h"
#include <stdio.h>

int main() {
  const char str[] = "Safal Lama";
  const char *st = str;

  printf("%s\n", str);

  // can directly pass the string but why? just pass the pointer and inc/dec to
  // view the stuff dawg [more secure ]
  int *indi = search_char_indices(st, 'a');
  int count = indi[0];
  printf("total target found: %d\n", count);
  for (int i = 1; i <= count; i++) {
    printf("%d, ", indi[i]);
  }
  printf("\n");
}
