#include <stdio.h>

double wallis(int k, int n){
  if(n == k + 1) return 1;
  double result = (((2.0 * n)*(2.0 * n))/((1.0 + 2.0 * (n - 1.0))*(3.0 + 2.0 * (n - 1.0))));
  return result * wallis(k, n + 1);
}

int main(){
  int k;
  scanf(" %d", &k);
  if(k < 1){printf("NO\n"); return 0;}
  printf("%.12lf\n", 2 * wallis(k, 1));
  return 0;
}

