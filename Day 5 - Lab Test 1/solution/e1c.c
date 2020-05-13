
/* Reverse a positive integer p (input) to get a new integer q, 
 * and find all the common divisors of p and q that are greater than 1. */

#include <stdio.h>

int main(){
  int p, q = 0, r, d, s, flag=0;
  
  printf("\nEnter p: ");
  scanf("%d", &p);
  
  for(r=p; r>0; r=r/10){
    d = r%10;
    q = q*10 + d;
  }  

  printf("Reverse number = %d\n", q);
  printf("Common divisors: ");
  
  s = (p<q)? p : q;
  for(r=2; r<=s; r++)
    if(p%r==0 && q%r==0)
      printf("%d, ", r), flag=1;
    
  if(!flag) printf("none.\n\n");
  else printf("\b\b.\n\n");
  return 0;
}
