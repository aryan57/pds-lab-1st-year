/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>


int total=0;

// first i used this concept but could not sucseed
/*
void print(int,int);

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	
	else
	{
		return n%10 + sum(n/10);
	}
}

void fun(int n)
{
	int a,b,i,j,sum;
	
	if(n%2==1)
	{
		a=n;b=(n-1)/2;
		
		for(i=0;i<=a;i++)
		{
			for(j=0;j<=b;j++)
			{
				sum=i+2*j;
				if(sum==n)
				{
					print(i,j);
					total++;
					
				}
			}
		}
	}
	
	if(n%2==0)
	{
		a=n;b=n/2;
		for(i=0;i<=a;i++)
		{
			for(j=0;j<=b;j++)
			{
				sum=i+2*j;
				if(sum==n)
				{
					print(i,j);
					total++;
					
				}
			}
		}
	}
	
	
}

void print(int i,int j)
{
	if(i!=0 && j!=0)
	{
	
	printf("1");print(i-1,j);
	printf("\n");
	printf("2");print(i,j-1);
	}
	
}
*/


void f(int sum,int currentno,int n)
{
	if(sum==n) 
	{
		printf("%d\n",currentno);
		total++;
	}
	
	if(sum<n)
	{
		f(sum+1,currentno*10+1,n);
		f(sum+2,currentno*10+2,n);
	}
	
}

int main ()
{
	int n;
	
	printf("enter the value of n :");
	scanf("%d",&n);
	
	f(1,1,n);
	f(2,2,n);
	
	printf("total no.s are : %d\n",total);
	
	
	return 0;
}
