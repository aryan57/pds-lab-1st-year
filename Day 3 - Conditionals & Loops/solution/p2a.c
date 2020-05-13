// Triangle inequality

#include<stdio.h>
#include<math.h>

#define PI (2.0*asin(1.0))

int main(){
  float a,b,c, A,B,C;
  printf("\nEnter three numbers: ");
  scanf("%f%f%f", &a,&b,&c);
 
  //triangle inequality check
  if(a + b <= c)
    printf("Triangle not possible, as %f + %f <= %f\n\n", a,b,c);
  else if(b + c <= a)
    printf("Triangle not possible, as %f + %f <= %f\n\n", b,c,a);
  else if(a + c <= b)
    printf("Triangle not possible, as %f + %f <= %f\n\n", a,c,b);
  else{
    A = acosf((pow(b,2) + pow(c,2) - pow(a,2))/(2*b*c)) * 180.0/PI;
    B = acosf((pow(a,2) + pow(c,2) - pow(b,2))/(2*a*c)) * 180.0/PI;
    C = acosf((pow(a,2) + pow(b,2) - pow(c,2))/(2*a*b)) * 180.0/PI;
    printf("Angles (in degree): %6.2f, %6.2f, %6.2f\n\n", A,B,C);
  }
 
  return 0;
}
