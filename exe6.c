#include <stdio.h>
#include <stdlib.h>

int numVezes(int n, int i){
  if(n == 0) return 0;
  if(n % 10 == i){
    return 1 + numVezes(n / 10, i);
  }
  else{
    return numVezes(n / 10, i);
  }
}

int main(){
  long long n;
  int i;
  
  scanf(" %lld", &n);
  scanf(" %d", &i);
  
  if(i < 0 || i > 9){printf("NO\n"); return 0;}
  if(n == 0 && i == 0){printf("1\n"); return 0;}
  n = llabs(n);

  int res = numVezes(n, i);
  printf("%d\n", res);
  return 0;
}

