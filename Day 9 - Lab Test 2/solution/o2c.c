/* Room allocation: n rooms, 2n students, 2 students per room */

#include <stdio.h>

int count_recursive(int n){
  return (n==1) ? 1 : n*(2*n-1)*count_recursive(n-1);
}  

int count_iterative(int n){
  int i, w=1;
  for(i=2; i<=n; i++)
    w *= i*(2*i-1);
  return w;
}  

int main(){
  int n;
  
  printf("Enter #rooms: "); scanf("%d", &n);
  printf("#ways (recursive) = %d\n", count_recursive(n));
  printf("#ways (iterative) = %d\n", count_iterative(n));
  
  return 0;
}
