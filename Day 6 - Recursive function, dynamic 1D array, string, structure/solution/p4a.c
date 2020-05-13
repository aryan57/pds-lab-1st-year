// Compute 1!+2!+3!+...+i! for i=1 to n without recursive function

#include <stdio.h>

int main(){
    int i, n, f, g;
    printf("Enter n: "); scanf("%d", &n);
    
    for(i=1, f=1, g=0; i<=n; i++){
      f = f*i;
      g = f+g;
      printf("%d ", g);
    }
    return 0;
}
