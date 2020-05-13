/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
#include <stdlib.h>

void f(int a[],int n)
{
	int i,temp;
	
	//for swapping
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=*(a+n-1-i);
		*(a+n-1-i)=temp;
		
		
	}
	
	printf("\nafter reversal");
	
	for(i=0;i<n;i++)
	{
		printf("	%d",a[i]);
	}
	
	printf("\n\n");
}


int main ()
{
	int i,n,*a;
	
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	
	a=(int*)(malloc(n*sizeof(int)));
	
	for(i=0;i<n;i++)
	{
		printf("enter the element %d: ",i+1);
		scanf("%d",(a+i));
	}
	
	f(a,n);
	
	return 0;
}
