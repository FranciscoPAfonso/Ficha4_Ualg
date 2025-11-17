#include <stdio.h>
int i = 7;
int n;
int guarda[100] = {0, 0, 1, 1, 1, 2, 2};

int sequencia(){
  if (i == 99){printf("NO\n"); return 0;}
  guarda[i] = guarda[i-5] + guarda[i - 1];
  if (i >= n + 2){printf("%d\n", guarda[n + 2]); return 0;}
  i+=1;
  return sequencia();
}

int main(){
  scanf("%d", &n);
  if (n < 0){printf("NO\n"); return 0;}
  sequencia();
  return 0;
}

