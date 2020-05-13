/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/
#include <stdio.h>

int main(){

  float a, u, alpha, t, d;
  
  printf("\nEnter the initial x co-ordinate of particle \n");
  scanf("%f" , &a);
  printf("\nEnter the initial velocity of the particle \n");
  scanf("%f" , &u);
  printf("\nEnter the initial acceleration of the particle \n");
  scanf("%f" , &alpha);
  printf("\nEnter the time for which the particle is moving\n");
  scanf("%f" , &t);
  	
	d = a + u*t + 0.5*alpha*t*t ; 
  if (d<0)
    d=-d; // distance is always +ve so i have used the if condition  


printf("\n The distane of the particle from the origin is %f\n", d);

  return 1;
}
