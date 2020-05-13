/* Triangle area: sqrt(s(s-a)(s-b)(s-c)), where s=(a+b+c)/2. */

#include <stdio.h>
#include <math.h>

float tri_area(float ax, float ay, float bx, float by, float cx, float cy){
  float a, b, c, s;
  a = sqrt((bx-cx)*(bx-cx) + (by-cy)*(by-cy));
  b = sqrt((ax-cx)*(ax-cx) + (ay-cy)*(ay-cy));
  c = sqrt((bx-ax)*(bx-ax) + (by-ay)*(by-ay));
  s = (a+b+c)/2.0;
  return sqrtf(s*(s-a)*(s-b)*(s-c)); 
}

int main(){
  float ax, ay, bx, by, cx, cy;
  
  printf("Enter (x,y)-coordinates of A: "); scanf("%f%f", &ax, &ay);
  printf("Enter (x,y)-coordinates of B: "); scanf("%f%f", &bx, &by);
  printf("Enter (x,y)-coordinates of C: "); scanf("%f%f", &cx, &cy);
  
  printf("Area of ABC = %6.2f\n\n", tri_area(ax, ay, bx, by, cx, cy)); 
  
  return 0;
}
