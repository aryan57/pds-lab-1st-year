#include <stdio.h>

int main(){
  float a, b, c, d, e;
  
  printf("Enter the values of a, b, c, d in order: ");
  scanf("%f%f%f%f", &a, &b, &c, &d);
  e = ((a+b)*c)/d;
  printf("e = %f\n", e);
  
  return 1;
}
