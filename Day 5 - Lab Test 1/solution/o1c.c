/* Find the largest digit l in a positive integer n (input).
 * Form a new number m whose digits are l minus the corresponding digits of n. 
 * Print l and m.
 */

#include <stdio.h>

int main(){
  int n, l, m, t, d;
  
  printf("\nEnter n: ");
  scanf("%d", &n);
  
  for(l=0, t=n; t>0; t/=10){
    d = t%10;
    l = (l<d)?d:l;
  }

  printf("Largest digit = %d\n", l);
    
  for(m=0, t=n; t>0; t/=10){
    d = t%10;
    m = m*10 + l;
  }
  
  m = m-n;

  printf("New number = %d\n", m);
  
  return 0;
}
