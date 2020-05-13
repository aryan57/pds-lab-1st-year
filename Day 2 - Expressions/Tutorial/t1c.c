#include <stdio.h>

int main(){
  int n, u, t, s; // the number, the digits at tenth and unit places, and their sum
  
  printf("Enter a 2-digit number: ");
  scanf("%d", &n);
  
  t = n/10; 
  u = n-t*10;
  s = t+u;

  printf("Digits and their sum = %d + %d = %d\n", t, u, s);
  
  return 1;
}
