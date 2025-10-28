#include <stdio.h>

int x, y;

int mdc(int a, int b){
  if(b == 0) return a;
  else{
    int mod = a % b;
    return mdc(b, mod);
  }
}

int main(){
  scanf(" %d", &x);
  scanf(" %d", &y);
  printf("%d\n", mdc(x, y));
  return 0;
}

