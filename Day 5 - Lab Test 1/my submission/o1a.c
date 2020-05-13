/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
#include <math.h>

float tri_area(float xa,float ya,float xb,float yb,float xc,float yc){

	float a,b,c,s;
	//a,b,c are lengths of sides of triangle and s is the semi perimeter
	//a,b,c are calculated using the distance formula
	a=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	b=sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));
	c=sqrt((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya));
	s=0.5*(a+b+c);
		
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main (){

	float xa,ya,xb,yb,xc,yc;

	printf("\nenter (x,y) - coordinates of A : ");
	scanf("%f%f",&xa,&ya);
	printf("\nenter (x,y) - coordinates of B : ");
	scanf("%f%f",&xb,&yb);
	printf("\nenter (x,y) - coordinates of C : ");
	scanf("%f%f",&xc,&yc);

	printf("\narea of triangle ABC : %4.2f\n",tri_area(xa,ya,xb,yb,xc,yc));
	
	return 0;
}
