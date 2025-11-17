#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void padrao(int n, int offset) {
  if (n == 1){ 
    for (int i = 0; i < offset; i++) printf("  ");
    printf("*\n");
    return;
  }
    
  padrao(n/2, offset);

  for (int i = 0; i < offset; i++) printf("  ");
  for (int i = 0; i < n; i++){
    if (i == n - 1) printf("*");
    else printf("* ");
  }
  printf("\n");

  padrao(n/2, offset + n/2);
}

int main() {
  int n;
  scanf("%d", &n);
  if (n < 1 || n > 100 || (n & (n - 1)) != 0) {
    printf("NO\n");
    return 0;
  }
  padrao(n, 0);
  return 0;
}

