//Word search in a dynamically allocated array

#include <stdio.h>
#include <stdlib.h> //for malloc
#include <string.h> 

typedef struct {
int roll; char name[22];
} tuple;

int main(){
  int n, i;
  tuple *a;
  char x[22];
  int found = 0;
  
  printf("\nEnter n: ");
  scanf("%d", &n);
  
  a = (tuple *)(malloc(n*sizeof(tuple)));
  
  printf("Enter data (roll no. & name): \n"); 
  for(i=0; i<n; i++)
    scanf("%d%s", &a[i].roll, a[i].name);
  
  printf("\nData: \n"); 
  for(i=0; i<n; i++)
    printf("%d %s\n", a[i].roll, a[i].name);
  
  printf("\nEnter the name to be searched: ");
  scanf("%s", x);
  
  for(i=0; i<n; i++)
    if(strcmp(x, a[i].name) == 0)
      found = 1, printf("%d %s\n\n", a[i].roll, a[i].name);
    
  if(!found)
    printf("Name not found.\n\n");
 
  return 0;
}
