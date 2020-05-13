// Swapping two records with the same structure -- using content swap

#include <stdio.h>
#include <string.h>

struct employee{
  char name[15]; int id;
};

void swap(struct employee *a, struct employee *b){
  char t[15]; int u;
  
  strcpy(t, a->name); 
  strcpy(a->name, b->name);
  strcpy(b->name, t);
  u = a->id; a->id = b->id; b->id = u;
}
  
int main(){
  struct employee a, b;
  
  printf("Enter the name and ID of 1st employee: "); 
  scanf("%s%d", a.name, &a.id);
  printf("Enter the name and ID of 2nd employee: "); 
  scanf("%s%d", b.name, &b.id);
  
  swap(&a, &b);
  
  printf("\nAfter swapping:\n\n");
  
  printf("Employee 1: %s %d\n",   a.name, a.id);
  printf("Employee 2: %s %d\n\n", b.name, b.id);
  
  return 0;
}
