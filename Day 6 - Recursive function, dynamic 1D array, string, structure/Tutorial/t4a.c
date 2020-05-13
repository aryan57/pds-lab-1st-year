// nCr for all r using recursion

#include<stdio.h>

int combination(int n, int r){
  if (r==n || r==0) 
    return 1;
  else
    return combination(n-1, r-1) + combination(n-1, r);
}

int main(){
  int n, r;
  printf("\nEnter n: ");
  scanf("%d", &n);
  for(r=0; r<=n; r++)
    printf("%d ", combination(n, r));
  printf("\n\n");
  return 0;
}
