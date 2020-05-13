
/* Input are five positive integers, namely a, b, c, d, e (not necessarily distinct). 
   Check whether there is one among them such that double that number is less than at least three of them. 
   Print "yes" and that number if it exists, otherwise print "no".
   
   Logic: 
   Answer is "yes" <=> m = min(a,b,c,d,e) < x/2 for at least three elements x in {a,b,c,d,e}-{m}.
*/

#include <stdio.h>

int main(){
  int a, b, c, d, e, m, i=0; //m = min(a,b,c,d,e)
  
  printf("\nEnter five positive integers: ");
  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
  
  m = a;
  if (b<m) m = b;
  if (c<m) m = c;
  if (d<m) m = d;
  if (e<m) m = e;
  
  if (2*m < a) i++;
  if (2*m < b) i++;
  if (2*m < c) i++;
  if (2*m < d) i++;
  if (2*m < e) i++;
  
  if(i>=3) //condition is true for at least three numbers 
    printf("yes: %d\n\n", m);
  else 
    printf("no\n\n");
    
  return 0;
}
