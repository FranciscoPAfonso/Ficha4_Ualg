#include <stdio.h>

int b1=0, b2=0, b3=0, v=1, ano=1, n=0;

int IndianFibo(){

  b3 = b2;
  b2 = b1;
  b1 = v;
  v += b3;
  ano++;
  if (ano == n){ printf("%d\n", v); return 0;}
  return IndianFibo();
}


int main(){
  scanf("%d", &n);
  if (n <= 0){printf("NO\n"); return 0;}
  else if (n == 1){printf("1\n"); return 0;}
  IndianFibo();
  return 0;
}

