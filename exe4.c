#include <stdio.h>

long long catalan(int n);
long long catalanS(int n, int i);


long long int catalanS(int n, int i){
  if (i == n) return 0;
  return catalan(i) * catalan(n - 1 - i) + catalanS(n, i + 1);
}

long long int catalan(int n){
  if(n == 0 || n == 1) return 1;
  return catalanS(n, 0);
}

int main(){
  int n;
  scanf(" %d", &n);
  if(n < 0){printf("NO\n"); return 0;}
  printf("%lld\n", catalan(n));
}

