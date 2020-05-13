/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
/*
from permutation and combination ,there is (2*n!)/(2^n) ways
i have calculated that using different functions.
*/

int recursive(int n)
{
	if(n==2) return 1; // no of students is 2,then only one way left
	else return 0.5*n*(n-1)*recursive(n-2); 
	//else there if nC2 times no. of remaining students ways
	// i have applied permutation and combination here
}

int iteration(int n)
{
	int i,k=1,j=1;
	for(i=1;i<=n;i++)
	{
		if(i<=n/2)k*=2;
		j=j*i;
	}
	return j/k;
}

int main ()
{
	int n;
	
	printf("enter #rooms :");
	scanf("%d",&n);
	printf("\ncount (recursive) = %d",recursive(2*n));
	printf("\ncount (iterative) = %d\n",iteration(2*n));
	
	return 0;
}
