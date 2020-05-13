
/* Given a positive integer n as input, find the largest perfect square s that is at most n.
 * You cannot use any multiplication, division, modulo operation, or math library.
 */

#include <stdio.h>

int main(){
  int n, s, i;
  
  printf("\nEnter n: ");
  scanf("%d", &n);
  
  for(i=s=1; ; i++)
    if(s+i+i+1 > n)
      break;
    else 
      s=s+i+i+1;
  
  printf("s = %d\n\n", s);
  return 0;
}
