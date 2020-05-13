// expansion of sinx =  x - x^3/3! + x^5/5! - ... for any real x 

#include <stdio.h>
#include <math.h>

#define PI (2.0*(asin(1.0)))

int main(){
    double x, t, s;
    int i, n;
    printf("\nEnter an angle in degree: ");
    scanf("%lf", &x);
    x = x*PI/180.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    for(s=t=x, i=1; i<n; i++){
      t = t*x*x/((2*i)*(2*i+1));
      t = -t;
      s+=t;
    }
    
    printf("Program output: sin(%lf) = %lf\n", x, s);
    printf("C math library: sin(%lf) = %lf\n\n", x, sin(x));
    
    return 0;
}

