//GCD 

#include <stdio.h>

int main(){
    int a, b, c;
    printf("\nEnter two positive integers: ");
    scanf("%d%d", &a, &b);
    while(b!=0){
        c = b; 
        b = a%b;
        a = c; 
    printf("a b c = %7d %7d %7d\n", a, b, c);
    }
    printf("GCD = %d\n\n", a);
    
    return 0;
}

