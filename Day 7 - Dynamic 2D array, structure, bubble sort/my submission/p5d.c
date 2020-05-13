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


float area(int x1,int y1,int x2,int y2,int x3,int y3)
{
	
	
	float ans;
	
	ans=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	
	if(ans<0)ans=-ans;
	
	return ans;
}

int inside(int x,int y, triangle a)
{
	int x1,y1,x2,y2,x3,y3;
	
	x1=a.coordinate[0].x;
	y1=a.coordinate[0].y;
	x2=a.coordinate[1].x;
	y2=a.coordinate[1].y;
	x3=a.coordinate[2].x;
	y3=a.coordinate[2].y;
	
	float areamain,area1,area2,area3;
	
	areamain=area(x1,y1,x2,y2,x3,y3);
	area1=area(x,y,x2,y2,x3,y3);
	area2=area(x1,y1,x,y,x3,y3);
	area3=area(x1,y1,x2,y2,x,y);
	
	return areamain==area1+area2+area3?1:0;

	
}


int main ()
{
	int i,n,x,y,flag;
	scanf("%d",&n);
	
	triangle *t;
	t=(triangle*)(malloc(n*sizeof(triangle)));
	
	for(i=0;i<n;i++)
	{
scanf("%d%d%d%d%d%d",&t[i].coordinate[0].x,&t[i].coordinate[0].y,&t[i].coordinate[1].x,&t[i].coordinate[1].y,&t[i].coordinate[2].x,&t[i].coordinate[2].y);
	}
	
	
	for(y=20;y>=0;y--)
	{
		for(x=0,flag=1;x<=40;x++,flag=1)
		{
			for(i=0;i<n;i++)
			{
				if(inside(x,y,t[i]))
				{
					printf("%d",i+1);
					flag=0;
					break;
				}
				
			}
			if(flag)printf(" ");
			
		}
		printf("\n");
	}
	
	return 0;
}
