#ifndef SORT
#define SORT

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

  for(int i=0; i<=n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(arr[j]< arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}
#endif // !SORT
