/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>

int fact( int n)
{
	int ans=1,i;
	if (n==0)
	{
		return ans;
	}
	
	else
	{
		
		for(i=1;i<=n;i++)
		{
			ans*=i;
		}

		return ans;
	}
	
}
	
	

void func(int n)
{
	int sum=0,i,j;
	
	for(i=1;i<=n;i++,sum=0)
	{
	
		for(j=1;j<=i;j++)
		{
			sum+=fact(j);
		}
		
		printf("	%d",sum);
	}
	
	printf("\n\n");

}

int main ()
{
	int n;
	
	printf("enter the value of n :");
	scanf("%d",&n);
	
	func(n);
	
	return 0;
}
