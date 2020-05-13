
/* Input are four positive integers, namely a, b, c, d (not necessarily distinct). 
   Check whether there is one among them which is larger than thrice of each other. 
   Print "yes" and that number if it exists, otherwise print "no".
   
   Logic: 
   Answer is "yes" <=> m = max(a,b,c,d) > 3x for each x in {a,b,c,d}-{m}.
*/

#include <stdio.h>

int main(){
  int a, b, c, d, m, i=0; //m = max(a,b,c,d)
  
  printf("\nEnter four positive integers: ");
  scanf("%d%d%d%d", &a, &b, &c, &d);
  
  m = a;
  if (b>m) m = b;
  if (c>m) m = c;
  if (d>m) m = d;
  
  if (m > 3*a) i++;
  if (m > 3*b) i++;
  if (m > 3*c) i++;
  if (m > 3*d) i++;
  
  if(i==3) //condition is true for all numbers except m
    printf("yes: %d\n\n", m);
  else 
    printf("no\n\n");
    
  return 0;
}
