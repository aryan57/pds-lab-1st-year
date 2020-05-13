/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

typedef struct
{
	char roll[10];
	char subject[5];
	char class[3];
} record;
 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main ()
{
	int i,n;
	record *arr;
	
	
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	arr=(record*)(malloc(n*sizeof(record)));
	
	printf("\n\n\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%s %s %s",arr[i].roll,arr[i].subject,arr[i].class);
	}
	
	for(i=0;i<n;i++)
	{
		if(strcmp(arr[i].subject,"NLP")==0)
		{
			printf("%s %s %s\n",arr[i].roll,arr[i].subject,arr[i].class);	
		}
	}
	
	printf("\n\n\n");
	
	for(i=0;i<n;i++)
	{
		if(strcmp(arr[i].subject,"THY")==0)
		{
			printf("%s %s %s\n",arr[i].roll,arr[i].subject,arr[i].class);	
		}
	}
	
	
	
	return 0;
}
