/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
#include<stdlib.h> //for malloc function

typedef struct
{
	int x;
	int y;
} point;

typedef struct
{
	point coordinate[3];
} triangle;


int main ()
{
	int i,n;
	scanf("%d",&n);
	
	triangle *t;
	t=(triangle*)(malloc(n*sizeof(triangle)));
	
	for(i=0;i<n;i++)
	{
scanf("%d%d%d%d%d%d",&t[i].coordinate[0].x,&t[i].coordinate[0].y,&t[i].coordinate[1].x,&t[i].coordinate[1].y,&t[i].coordinate[2].x,&t[i].coordinate[2].y);
	}
	
	printf("Triangles : \n");
	for(i=0;i<n;i++)
	{
		printf("T%d:	(%d,%d)	(%d,%d)	(%d,%d)\n",i+1,t[i].coordinate[0].x,t[i].coordinate[0].y,t[i].coordinate[1].x,t[i].coordinate[1].y,t[i].coordinate[2].x,t[i].coordinate[2].y);
	}
	
	return 0;
}
