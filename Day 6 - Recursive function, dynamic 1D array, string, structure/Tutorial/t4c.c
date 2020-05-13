//swap

#include <stdio.h>
#include <stdlib.h> //for malloc

void swapCorrect(int *a, int *b){
  int c;
  c = *a; 
  *a = *b;
  *b = c;
}

void swapWrong(int a, int b){
  int c;
  c = a; 
  a = b;
  b = c;
}

int main(){
  int a, b;
  
  printf("\nEnter a and b: ");
  scanf("%d%d", &a, &b);
  
  swapWrong(a, b);
  printf("swapWrong:   a = %d, b = %d\n", a, b);
  
  swapCorrect(&a, &b);
  printf("swapCorrect: a = %d, b = %d\n", a, b);
  
  swapCorrect(&a, &b);
  printf("swapCorrect: a = %d, b = %d\n\n", a, b);
  
  return 0;
}
