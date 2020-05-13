// User supplies a 3-digit number. 
// Your program should reverse the digits and print the resultant number on the terminal.

#include <stdio.h>

int main(){
  int n, u, t, h, rev;
  /* u, t, h are digits at unit, tenth, and hundredth places.
     rev is the reverse number */
  
  printf("Enter a 3-digit number: ");
  scanf("%d", &n);
  
  h = ((n/100)*100)/100;
  t = (n - h*100)/10;
  u = n - (h*100) - t*10;
  
  rev = u*100 + t*10 + h;

  printf("Reverse number = %d\n", rev);
  
  return 1;
}
