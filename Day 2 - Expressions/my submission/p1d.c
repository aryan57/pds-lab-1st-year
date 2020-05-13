/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/
#include <stdio.h>

int main()

{
  int n, hundred, ten, one , reverse;
  
  printf("\nEnter a 3 digit number : ");
  scanf("%d" , &n);

	hundred = n/100 ;
	ten=(n - hundred*100)/10 ;
	one=n - hundred*100 - ten*10 ;
	reverse = 100*one + 10*ten + hundred ;

  printf("\nReverse Number : %d\n", reverse);
}
