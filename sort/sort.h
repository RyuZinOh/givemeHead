#ifndef SORT
#define SORT

#include <string.h>
static inline void sort_arrayint_asc(int *arry, int n){
  if(!arry || n<=0) return;

  for (int i=0; i<n-1; i++) {
    for (int j=0; j<n-i-1; j++) {
      if(arry[j] > arry[j+1]){
        int temp = arry[j];
        arry[j] = arry[j+1];
        arry[j+1] = temp;
      }
    
    }
  
  }
}

static inline void sort_arrayint_desc(int*arr, int n){
  if(!arr || n<=0) return;

  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(arr[j]< arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}


static inline void sort_string_asc(char *str){
  if (!str) return;
  int n = strlen(str);
  if (n<=1) return;
  
  for (int i=0; i<n-1; i++) {
    for (int j=0; j<n-i-1; j++){
      if(str[j]> str[j+1]){
        int temp = str[j];
        str[j] = str[j+1];
        str[j+1] = temp;
      }
    }
  }
}


static inline void sort_string_desc(char *str){
  if (!str) return;
  int n = strlen(str);
  if (n<=1) return;
  
  for (int i=0; i<n-1; i++) {
    for (int j=0; j<n-i-1; j++){
      if(str[j]< str[j+1]){
        int temp = str[j];
        str[j] = str[j+1];
        str[j+1] = temp;
      }
    }
  }
}



static inline void words_in_array_asc(char w[][20], int left, int right){
  if (left >=right) return;
  int i = left;
  int j = right;

  char pivot[20];
  strcpy(pivot, w[(left+right)/2]);
  char temp[20];

  while (i<=j) {
    while (strcmp(w[i], pivot)<0) {
      i++;
    }
    while (strcmp(w[j], pivot)>0) {
      j--;
    }

    if(i<=j){
      strcpy(temp, w[i]);
      strcpy(w[i], w[j]);
      strcpy(w[j], temp);
      i++;
      j--;
    }
  }
  if (left<j) {
    words_in_array_asc(w,left, j);
  }
  if (right>i){
    words_in_array_asc(w, i, right);

  }
    
}

static inline void words_in_array_desc(char w[][20], int left, int right){
  if (left >=right) return;
  int i = left;
  int j = right;

  char pivot[20];
  strcpy(pivot, w[(left+right)/2]);
  char temp[20];

  while (i<=j) {
    while (strcmp(w[i], pivot)>0) {
      i++;
    }
    while (strcmp(w[j], pivot)<0) {
      j--;
    }

    if(i<=j){
      strcpy(temp, w[i]);
      strcpy(w[i], w[j]);
      strcpy(w[j], temp);
      i++;
      j--;
    }
  }
  if (left<j) {
    words_in_array_desc(w,left, j);
  }
  if (right>i){
    words_in_array_desc(w, i, right);

  }
    
}

#endif // !SORT
