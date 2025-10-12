#ifndef SEARCH
#define SEARCH

#define MAX_MATCHES 100

#include <stdio.h>
#include <string.h>

static inline int* search_char_indices(const char *str, char target) {
  static int indices[MAX_MATCHES + 1];

  if (!str) {
    indices[0] = 0;
    return indices;
  }

  int len = strlen(str);
  int count = 0;

  for (int i = 0; i < len && count < MAX_MATCHES; i++) {
    if (str[i] == target) {
      indices[count + 1] = i;
      count++;
    }
  }

  indices[0] = count;
  return indices;
}
#endif // !SEARCH
