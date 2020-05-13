//Linear search in a dynamically allocated array of structure

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
char roll[10], code[5], board[3];
} record;

int main(){
  int n, i;
  char q[5];
  record *a;
  
  scanf("%d", &n);
  
  a = (record *)(malloc(n*sizeof(record)));

  for(i=0; i<n; i++)
    scanf("%s%s%s", a[i].roll, a[i].code, a[i].board);
  
  printf("\nCode NLP:\n");
  
  for(i=0; i<n; i++)
    if(strcmp("NLP\0", a[i].code) == 0)
      printf("%s %s %s\n", a[i].roll, a[i].code, a[i].board);
 
  printf("\nCode THY:\n");
  
  for(i=0; i<n; i++)
    if(strcmp("THY\0", a[i].code) == 0)
      printf("%s %s %s\n", a[i].roll, a[i].code, a[i].board);
 
  return 0;
}
