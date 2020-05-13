// Definite integral by trapezoidal rule for the function:
// y = 1 + 1/(1+x) + 1/(2+x^2) + ... + 1/(p+x^p)

#include<stdio.h> 
#include<math.h> 

double y(double x, int p){ 
    double y=1.0;
    for (int i=1; i<=p; i++)
      y += 1.0/(i+pow(x,(double)i));
    return y;  
} 

double integral(double a, double b, double n, int p){ 
    double h = (b-a)/n; 
    double s = y(a,p)+y(b,p); 

    for (int i=1; i<n; i++) 
      s += 2*y(a+i*h,p); 

    return (h/2)*s; 
} 

int main(){ 
    double a, b, n;
    int p;
    
    printf("\nEnter the domain limits a and b: ");
    scanf("%lf%lf", &a, &b);
    printf("Enter the power p: ");
    scanf("%d", &p);
    n = 100*(b-a);
    
    printf("Value of the integral = %f\n\n", integral(a, b, n, p)); 
    return 0; 
} 
