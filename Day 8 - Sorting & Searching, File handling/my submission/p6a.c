/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

// Sorting an array of structure

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
  char name[15], surname[15];
  float cgpa;
};

int binary_search(float x,struct student *a, int p, int q){
  if(p==q)
    if(x>=a[p-1].cgpa && x<=a[p+1].cgpa)
      {return p;}
    else
      return -1;
  
  int m = (p+q)/2;
  
  if(x<=a[m].cgpa)
    binary_search(x, a, p, m);
  else 
    binary_search(x, a, m+1, q);
}

void swap(struct student *a, struct student *b){
  char t[15]; float c;
  
  strcpy(t, a->name); 
  strcpy(a->name, b->name);
  strcpy(b->name, t);
  strcpy(t, a->surname); 
  strcpy(a->surname, b->surname);
  strcpy(b->surname, t);
  c = a->cgpa; a->cgpa = b->cgpa; b->cgpa = c;
}
  
void bubbleSort(struct student *s, int n){
  int i, j;
  
  for(i=0; i<n-1; i++){
    for(j=0; j<n-i-1; j++){ // s[n-i] to s[n-1] are already sorted
      if(s[j].cgpa > s[j+1].cgpa){ // swap the data of students j and j+1
        swap(&s[j], &s[j+1]);
      }
    }
  }
}



void print_output(struct student *s, int n){  
  int i;
  printf("\nSorted cgpa:\n");
  for(i=0; i<n; i++)
    printf("%c. %-15s  %4.2f\n", s[i].name[0], s[i].surname, s[i].cgpa);
  printf("\n");
}



void print_sortoutput(struct student *s, int l, int h,float rl,float rh)
{
	  int i;
  printf("\nStudents with CGPA in [%4.2f, %4.2f]:\n",rl,rh);
  for(i=l; i<h; i++)
    printf("%c. %-15s  %4.2f\n", s[i].name[0], s[i].surname, s[i].cgpa);
  printf("\n");
}

int main(){
  struct student *s;
  int n, i;
  
  scanf("%d", &n);
  
  s = (struct student *)(malloc(n*sizeof(struct student)));
 
  for(i=0; i<n; i++)
    scanf("%s%s%f", s[i].name, s[i].surname, &s[i].cgpa);

  bubbleSort(s, n);
  print_output(s, n);

 
int A =  binary_search(5.00,s,0,n-1);
int B =  binary_search(7.50,s,0,n-1);
int C =  binary_search(8.50,s,0,n-1);

	print_sortoutput(s,A,B,5.00,7.50);
	print_sortoutput(s,B,C,7.50,8.50);
	print_sortoutput(s,C,n,8.50,10.00);
  

  
  return 0;
}
