/*
Write a program that takes as input the (x,y) coordinates of two points p and q in floating point.
Then it finds the area of the semicircle with pq as the diameter and prints the result on the terminal.
(The name of your C file should be p1b.c)
*/
#include<stdio.h>
#include<math.h>
#define pi (2.0*asin(1.0))

int main(){
	float x1,y1,x2,y2;
	printf("\nEnter coordinates of 1st point: ");
	scanf("%f%f",&x1,&y1);
	printf("Enter coordinates of 2nd point: ");
	scanf("%f%f",&x2,&y2);
	
	float dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
		
	float area = (pi * dist * dist) / 8.0 ;
	printf("Area of semicircle = %f\n\n",area);
	return 1;
}
