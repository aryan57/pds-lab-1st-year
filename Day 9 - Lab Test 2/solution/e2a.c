/* Sum of consecutive even squares */

#include <stdio.h>
#include <math.h>

int main(){
  int n, x;
  
  printf("Enter n: "); scanf("%d", &n);
  
  x = sqrtf((float)(n+4)/8-1);
  if (4*x*x + 4*(x+1)*(x+1) == n)
    printf("%d %d\n", 2*x, 2*x+2);
  else
    printf("Does not exist.\n");  
  
  return 0;
}
