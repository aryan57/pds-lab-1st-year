/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
#include <math.h>

int main ()
{
	
	float a,b,c,D; // D is discriminant
		
	printf("enter a,b,c in order :\n");
	scanf("%f %f %f", &a,&b,&c);
	D=b*b-4*a*c;

	if (D>=0){
		float root1,root2;
		root1=(-b + sqrt(D))/2*a;
		root2=(-b - sqrt(D))/2*a;
		printf("real roots are : %f, %f\n", root1,root2);
	}
	else{
                // since the roots are in form a+ib, a-ib i have taken only two variables.
		float r_root,c_root; 
		r_root=(-b)/(2*a);  // r_root means real part of both the roots.
		c_root=sqrt(-D)/(2*a);   // c_root means complex part of the roots.
		printf("complex roots are : %f+i%f, %f-i%f \n",r_root,c_root,r_root, c_root);
	}
return 0;
}
