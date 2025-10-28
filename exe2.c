#include <stdio.h>

long long int tribonacci(long long int n){
  switch (n){
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return 2;
    default:
      return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
  }
}

int main(){
  long long int n;
  scanf(" %lld", &n);
  if(n < 0){printf("NO\n"); return 0;}
  printf("%lld\n", tribonacci(n));
  return 0;
}

