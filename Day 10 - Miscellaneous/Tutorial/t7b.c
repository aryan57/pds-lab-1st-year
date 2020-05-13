/* Linked list insertion in nondecreasing order (+ve elements only) */ 

#include <stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node *insertList(struct node *head, int x){ 
  struct node *p, *q, *new;
  
  new = (struct node *)malloc(sizeof(struct node));
  new->data = x; new->next = NULL;
  
  if (head==NULL) 
    return new; //first node 
  p = q = head;
  while (p != NULL){
    if (new->data <= p->data){
      if (p==head){
        new->next = head; //insert at start
        return new;
      }
      new->next = p; //insert at an intermediate position
      q->next = new;
      return head;
    }
    q = p;
    p = p->next;
  } 
  q->next = new;  //insert at end
  return head;
}

void printList(struct node *p){
  printf("\nInserted elements = ");
  while (p!=NULL){
    printf("%d ", p->data);
    p=p->next;
  }
  printf("\n\n");
}

int main(){
  struct node *head = NULL;
  int x;
  
  printf("\nEnter elements (0 to end): ");
  do{
    scanf("%d", &x);
    if(x>0) head = insertList(head, x);
  }while(x>0);
  
  printList(head);
  return 0;
}

