/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/
#include <stdio.h>
#include <math.h>

int main(){
  float px, py, qx, qy, d_sq, semiarea;
  
  printf("\nEnter the x co-ordinate of point P \n");
  scanf("%f" , &px);
  printf("\nEnter the y co-ordinate of point P \n");
  scanf("%f" , &py);
  printf("\nEnter the x co-ordinate of point Q \n");
  scanf("%f" , &qx);
  printf("\nEnter the y co-ordinate of point Q \n");
  scanf("%f" , &qy);
  	
	d_sq = (px-qx)*(px-qx) + (py-qy)*(py-qy) ;
	semiarea = (3.142*d_sq)/8 ;



  printf("\n  the area of the semicircle with PQ as the diameter is %f\n", semiarea);

  return 1;
}
