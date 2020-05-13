/* Perimeter of the largest equilateral triangle contained in a circle */

#include <stdio.h>
#include <math.h>

float equi_peri(float cx, float cy, float px, float py){
  float r;
  r = sqrtf((cx-px)*(cx-px) + (cy-py)*(cy-py));
  return 3.0*sqrtf(3.0)*r; 
}

int main(){
  float cx, cy, px, py;
  
  printf("Enter center coordinates: "); scanf("%f%f", &cx, &cy);
  printf("Enter point coordinates:  "); scanf("%f%f", &px, &py);
  printf("Perimeter = %6.2f\n\n", equi_peri(cx, cy, px, py)); 
  
  return 0;
}
