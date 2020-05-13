#include <stdio.h>
#include <math.h>

int main(){
  float x1, x2, y1, y2, d;
  
  printf("Enter the coordinates of p: ");
  scanf("%f%f", &x1, &y1);
  printf("Enter the coordinates of q: ");
  scanf("%f%f", &x2, &y2);
  
  d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
  d = sqrt(d);

  printf("Distance = %f\n", d);
  
  return 1;
}
