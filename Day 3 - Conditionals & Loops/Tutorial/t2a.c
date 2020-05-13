#include<stdio.h>

int main(){
  int a, b, c, m;
  printf("\nEnter three integers: ");
  scanf("%d%d%d", &a, &b, &c);
 
  m=a;
  
  if(b>m) 
    m=b;
  if(c>m)
    m=c;

  printf("Largest: %d\n\n", m);
  return 0;
}
