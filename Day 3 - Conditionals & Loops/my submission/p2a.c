/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
#include <math.h>
#define pi (2.0*(asin(1.0)))

int main (){

	float a,b,c;
	printf("enter the sides a,b,c of  triangle in order :\n");
	scanf("%f %f %f", &a,&b,&c);

	if (a+b<c){
		printf("triangle is not possible as %f + %f < %f", a,b,c);
	}
	if (b+c<a){
		printf("triangle is not possible as %f + %f < %f", b,c,a);
	}
	if (c+a<b){
		printf("triangle is not possible as %f + %f < %f", c,a,b);
	}

	if (a+b>c && b+c>a && c+a>b){
		double cosa, cosb, cosc, A, B, C ;
		cosa= (b*b+c*c-a*a)/(2*b*c);
		cosb= (a*a+c*c-b*b)/(2*a*c);
		cosc= (b*b+a*a-c*c)/(2*b*a);
		A=((acos(cosa))*180)/pi;
		B=((acos(cosb))*180)/pi;
		C=((acos(cosc))*180)/pi;
 
		printf("angles A,B,C in degree are : %f,%f,%f\n" ,A,B,C);

	}
	return 1;
}
