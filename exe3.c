#include <stdio.h>
#include <math.h>

double operacao(double x, int n){
  double y = n;
  if(n == 0) return 1;
  else if(n == 1) return x;
  else if((n % 2 == 0) && n != 0){
    return operacao(x, y/2.0) * operacao(x, y/2.0);
  }
  else if((n % 2 != 0) && n != 1){
   return operacao(x, y/2.0) * operacao(x, y/2.0) * x;
  }
  else return -1;
}

int main(){
  double x, z;
  int n;
  scanf(" %lf", &x);
  scanf(" %d", &n);
  if(n < 0){printf("NO\n"); return 0;}
  z = operacao(x, n);
  if(z == -1)printf("NO\n");
  else printf("%.6lf\n", z);
  return 0;
}

