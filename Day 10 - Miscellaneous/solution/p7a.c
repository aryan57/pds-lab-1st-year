/* Linked list insertion of student records at the head.
 * End of records is marked by $.
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
  char name[15], surname[15]; float cgpa;
  struct student *next;
};

struct student *insertList(struct student *head, struct student x){ 
  struct student *p, *q, *new;
  
  new = (struct student *)malloc(sizeof(struct student));
  strcpy(new->name, x.name); strcpy(new->surname, x.surname); new->cgpa = x.cgpa; new->next = head;
  return new; 
}

void printList(struct student *p){
  int i=1;
  printf("\nInserted records:\n");
  while (p!=NULL){
    printf("%2d: %c. %-15s %4.2f\n", i++, p->name[0], p->surname, p->cgpa);
    p=p->next;
  }
  printf("\n\n");
}

int main(){
  struct student *head = NULL, x;
  
  do{
    scanf("%s%s%f", x.name, x.surname, &x.cgpa);
    if(x.name[0] != '$') head = insertList(head, x);
  }while(x.name[0] != '$');
  
  printList(head);
  return 0;
}

