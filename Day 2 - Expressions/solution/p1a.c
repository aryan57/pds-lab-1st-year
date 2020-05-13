/*
Write a program that takes as input the values of five floating-point variables (a, b, c, d, e) 
and executes the following:
i) calculate the values of the expressions (a/b)*c and (a*b)/c;
ii) stores the above values in d and e, respectively;
iii) prints the values of d and e on the terminal.
Assume that c is non-zero.
*/

#include <stdio.h>

int main() {
    float a, b, c, d, e;  // Declare 5 floating-point variables
    printf("\nEnter the values of a, b (non-zero), c (non-zero), d, and e in order: \n"); 
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e); 
    printf("Input:  a = %f, b = %f, c = %f, d = %f, e = %f\n", a, b, c, d, e);
    d = (a/b)*c;          // Calculate the values of expressions  
    e = (a*b)/c;          // and store in respective variables
    printf("Output: d = %f, e = %f\n\n", d, e);
    return 0;
}
