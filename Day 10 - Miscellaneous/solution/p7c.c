/* Check 3-types bracketing using stack */ 

#include <stdio.h>
#include <stdlib.h>

struct node{
  char data;
  struct node *next;
};

struct node *pushStack(struct node *top, int x){ 
  struct node *p, *q, *new;
  
  new = (struct node *)malloc(sizeof(struct node));
  new->data = x; new->next = top;
  return new;
}

struct node *popStack(struct node *top, char c){
  if(top==NULL){
    printf("Invalid bracketing.\n\n");
    exit(0);
  }
  
  switch(c){
    case ')': if (top->data != '('){
                printf("Invalid bracketing.\n\n");
                exit(0);
              }
              break;
    case '}': if (top->data != '{'){
                printf("Invalid bracketing.\n\n");
                exit(0);
              }
              break;
    default : if (top->data != '['){
                printf("Invalid bracketing.\n\n");
                exit(0);
              }
  } 
  top=top->next;
}

int main(){
  struct node *top = NULL;
  char x;
  
  printf("\nEnter a math expression ('$' to end): ");
  do{
    scanf("%c", &x);
    if(x=='(' || x=='{' || x=='[')
      top = pushStack(top, x);
    else if(x==')' || x=='}' || x==']') 
      top = popStack(top, x);
  }while(x!='$');
  
  if(top==NULL)
    printf("Valid bracketing.\n\n");
  else 
    printf("Invalid bracketing.\n\n");
  
  return 0;
}

