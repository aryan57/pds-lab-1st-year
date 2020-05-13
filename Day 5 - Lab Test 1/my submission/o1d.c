/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

	/* in this question i am using the concept that
	the sum of first n odd natural numbers gives n^2
	example - sum of first 3 odd natural no.s is 3^2=9
	i.e, 1+3+5=9*/

#include <stdio.h>

int main (){

	int n,s=0,i;

	printf("enter n : ");
	scanf("%d",&n);

	for(i=1;s<=n;i+=2){	// i is increased by 2 because we are adding odd no.s only 
		s+=i;
	}
	
	/*after the last iteration s is increased by i 
	so it looks like s should be decreased by i 
	but actually i is also increased by 2 
	so we have to decrease s by i-2 and not by i*/

	s=s-(i-2);
	printf("\ns : %d\n",s);

	return 0;
}
