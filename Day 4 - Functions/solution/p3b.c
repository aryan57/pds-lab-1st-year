//Largest exponent

#include <stdio.h>

int xPowN(int x, int n){
  int i, res=1;
  for(i=1; i<=n; i++)
    res *= x;
  return res;
}

int main(){
  int s, t, n=1;
  printf("Enter value for s and t: ");
  scanf("%d%d", &s, &t);
  
  while(xPowN(s,n) < t)
    n++;
  
  printf("The max value of n: %d\n", n-1);
  
  return 0;
}
