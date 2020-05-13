// Dynamic memory allocation for 1D array and function usage

#include <stdio.h>
#include <stdlib.h>

void f(int a[], int n){
  int i, x;
  for (i=0; i<n/2; i++){
    x = a[i]; a[i] = a[n-1-i]; a[n-1-i] = x;
  }
}

int main(){
  int n, *a, i;
  
  printf("\nEnter n: ");
  scanf("%d", &n);
  
  a = (int *)(malloc(n*sizeof(int)));

  printf("Enter the elements: ");
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  
  f(a, n);
  
  printf("After reversal:     ");
  for(i=0; i<n; i++)
    printf("%d ", a[i]);
  printf("\n\n");
 
  return 0;
}
