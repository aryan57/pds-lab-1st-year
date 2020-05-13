/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/
#include <stdio.h>

int main(){
  float a, b, c, d, e;
  
  printf("\nEnter the value of a\n");
  scanf("%f" , &a);
  printf("\nEnter the non zero value of b\n");
  scanf("%f" , &b);
  printf("\nEnter the non zero value of c\n");
  scanf("%f" , &c);  

	d = (a/b)*c ;	
	e = (a*b)/c ;

  printf("\nd = %f\n", d);
  printf("\ne = %f\n", e);
  return 1;
}
