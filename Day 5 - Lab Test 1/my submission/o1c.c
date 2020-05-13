/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>

int main (){

	int n,l,m=0,i,count;

	/* n is no. to be taken
	l is the largest digit
	m is the new no.
	i is used as variable in both the for loops
	count is the counter variable for first for loop*/

	printf("Enter n : ");
	scanf("%d",&n);

	// this loop is for finding l
	for(i=n,count=1;i>0;count++,i/=10){
		if(count==1)l=i%10;
		if(l<i%10)l=i%10;
	}

	// this loop is for finding m
	for(i=1;n>0;){
		m+=(l-(n%10))*i;
		n/=10;
		i*=10;
	}

	printf("\nlargest digit : %d",l);
	printf("\nnew number : %d\n",m);

	return 0;
}
