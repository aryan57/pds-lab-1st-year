/*Compute the values of n!/n^n for n=1 to 50 and print them on the terminal up to 10th decimal place.
You should not use any function like pow() from math library.
You should use "for loop" or "while loop". */

#include <stdio.h>

int main(){
  int n, i; 
  double num, den;

  for(num=1, n=1; n<=50; n++){
    num = num*n;
    for(i=1, den=1; i<=n; i++)
      den = den*n;
    printf("n=%2d: %12.10f\n", n, num/den);
  }
  return 0;
}
