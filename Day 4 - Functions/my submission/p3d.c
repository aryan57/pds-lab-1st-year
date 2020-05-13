/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
#include <math.h>


double y(double x, int p){
	int i,sum=1;
	for(i=1;i<p;i++){
	sum+= 1/(1+pow(x,i));
	}
	return sum;
	}

double sigma(double a, double b, double n, int p){
	n=100*(a-b);
	int i,sum=0;
	for(i=1; i<=n-1 ; i++){
		sum+= y((a + i*0.005),p);
	}
	return sum;
	}
double integral(double a, double b, double n, int p){
	double ans;
	ans = 0.005*(y(a,p) + y(b,p) + 2*sigma(a,b,n,p));
	return ans;
	}

int main (){
	int p;
	double a,b,n;
	n=100*(a-b);
	printf("enter the domain limits a and b");
		scanf("%lf%lf", &a,&b);
	printf("enter the power p");
		scanf("%d", &p);
	printf("value of the integral is %lf" ,integral(a,b,n,p));

	
return 0;
}
