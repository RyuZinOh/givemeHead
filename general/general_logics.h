#ifndef GENERAL_LOGICS
#define GENERAL_LOGICS

#include "stdbool.h"

static inline bool is_prime(int n){
  if (n<=1) return false;
  if (n == 2) return  true;
  if (n%2==0) return  false;

  for(int i=3; i*i<=n; i+=2){
    if (n%i==0) return  false;
  }
  return true;
}

static inline int get_factorial(int n){
  int fact = 1;
  for (int i=n; i>0; i--) {
    fact = fact *i;
  }
  return  fact;
}

#endif // !GENERAL_LOGICS
