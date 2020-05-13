/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>

int main ()
{

	double i,n,value;
	for (n=1;n<=50;n++){
		for (i=1,value=1;i<=n;i++){
		value=(i/n)*value;
		}
	printf("n=%f : %12.10f\n", --i,value);
		/* i have taken i-- in previous line because
		after the first iteration , due to i++, 
		the value gets increased by 1,
		so to match it with the values i have taken i-- here */
		}

return 0;
}
