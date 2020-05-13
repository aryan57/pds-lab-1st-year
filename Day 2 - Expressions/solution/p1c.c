/*
A particle starts from a point A(a,0) on x-axis with an initial speed u 
and moves along +x-axis with an acceleration alpha. 
Let d be its distance from the origin (0,0) after t seconds. 
Write a program to compute the value of d and print it on the terminal. 
The values of a, u, alpha, and t are real and supplied by the user 
during execution of your program.
(The name of your C file should be p1c.c)
*/

#include <stdio.h>

int main(){
    float a, u, alpha, t, d;

    printf("\nEnter the values of a, speed, alpha and time in order: ");
    scanf("%f%f%f%f", &a, &u, &alpha, &t);
    
    d = a + u*t + (0.5)*alpha*t*t;
    
    printf("Distance from origin: %f\n\n", d);
    
    return 0;
}


