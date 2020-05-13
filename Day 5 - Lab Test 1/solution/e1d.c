
/* Given a positive integer n as input, find the smallest integer p such that 5^p is at least n. 
 * You cannot use any multiplication, division, modulo operation, or math library.
 */

#include <stdio.h>

int main(){
  int n, p=1;
  
  printf("\nEnter n: ");
  scanf("%d", &n);
  
  while(p<n)
    p=p+p+p+p+p;
  
  printf("min 5^p= %d\n\n", p);
  return 0;
}
