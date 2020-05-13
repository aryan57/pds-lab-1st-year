/* Count numbers with digits 2 and 3, and sum of digits = n */

#include <stdio.h>

int count_recursive(int n){ 
  return (n<5) ? 1 : count_recursive(n-2) + count_recursive(n-3);
}

int count_iterative(int n){ 
  int i, a=1, b=1, c=1, d=1;
  for(i=5; i<=n; i++){
    d = a+b; a=b; b=c; c=d;
  }
  return d;
}

int main(){
  int n;
  
  printf("Enter n (>1): "); scanf("%d", &n);
  printf("count (recursive) = %d\n", count_recursive(n));
  printf("count (iterative) = %d\n", count_iterative(n));
  
  return 0;
}
