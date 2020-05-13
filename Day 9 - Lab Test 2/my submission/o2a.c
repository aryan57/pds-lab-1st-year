/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
#include <math.h>

int main ()
{
	int n;
	double w;
	printf("enter n :");
	scanf("%d",&n);
	
	
	//w^2+(w+2)^2=n;
	//or (w+1)^2=n/2-1;
	//thus n must be even
	
	if(n%2==1)printf("\nDoes not exist.\n");
	else
	{
		w=sqrt(n/2-1);
		if(w==(int)w)printf("\n%d %d\n",(int)w-1,(int)w+1);
		else printf("\nDoes not exist.\n");
	}
	
	return 0;
}
