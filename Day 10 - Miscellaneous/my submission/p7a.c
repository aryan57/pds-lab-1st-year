/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
  char name[15], surname[15];
  float cgpa;
  struct student *next;
};
 
struct student *insertList(struct student *head,char name[],char surname[],float cgpa)
{ 
  struct student *new;
  new = (struct student *)malloc(sizeof(struct student));
  
  strcpy(new->name,name);
  strcpy(new->surname,surname);
  new->cgpa = cgpa;
  
  new->next = head;
  
  return new;
}

void printList(struct student *p){

  int count=0;
  printf("\nInserted records = ");
  while (p!=NULL)
  {
    count++;
    printf("\n%d: %c. %-10s	%4.2f",count,p->name[0],p->surname,p->cgpa);
    p=p->next;
  }
  printf("\n\n");
}
  
int main()
{
  char name[15],surname[15];
  float cgpa;
 
  struct student *head = NULL;

  do{
  
    scanf("%s%s%f", name, surname, &cgpa);
    if(strcmp(name,"$"))head = insertList(head,name,surname,cgpa);

  }while(strcmp(name,"$"));
  
  printList(head);

  return 0;
}





