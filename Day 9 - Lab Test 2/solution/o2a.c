/* Sum of consecutive odd squares */

#include <stdio.h>
#include <math.h>

int main(){
  int n, x;
  
  printf("Enter n: "); scanf("%d", &n);
  
  x = sqrtf((float)((n/2-1)/4));
  if ((2*x-1)*(2*x-1) + (2*x+1)*(2*x+1) == n)
    printf("%d %d\n", 2*x-1, 2*x+1);
  else
    printf("Does not exist.\n");  
  
  return 0;
}
