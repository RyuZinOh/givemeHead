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

static inline bool is_armstrong(int n){
  if (n<0) return false;

  int original  = n;
  int digits = 0;
  int temp = n;

  while (temp!=0){
    digits++;
    temp/=10; //cutting of the tenth term each until 0
  }

  int sum = 0;
  temp = n;
  
  while (temp!=0) {
    int digit = temp%10;

    int power = 1;
    
    for(int i=0; i<digits; i++){
      power*=digit;
    }
    
    sum+=power;
    temp/=10;
  
  }
  return sum==original;
}

#endif // !GENERAL_LOGICS
