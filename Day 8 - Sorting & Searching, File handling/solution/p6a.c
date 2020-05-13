// Sorting an array of structure

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
  char name[15], surname[15];
  float cgpa;
};

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
void print_sorted(struct student *s, int n){  
  int i;
  printf("\nSorted by CGPA:\n");
  for(i=0; i<n; i++)
    printf("%c. %-15s %4.2f\n", s[i].name[0], s[i].surname, s[i].cgpa);
}

int binary_search(float x, struct student a[], int p, int q){
  if(p==q)
      return p;
  
  int m = (p+q)/2;
  
  if(x<=a[m].cgpa)
    binary_search(x, a, p, m);
  else
    binary_search(x, a, m+1, q);
}

void range_search(float u, float v, struct student s[], int n){
  int i = binary_search(u, s, 0, n-1);
  printf("\nStudents with CGPA in [%4.2f, %4.2f]:\n", u, v);
  while(i<n && s[i].cgpa <= v){
    printf("%c. %-15s %4.2f\n", s[i].name[0], s[i].surname, s[i].cgpa);
    i++;
  }
}
  
int main(){
  struct student *s;
  int n, i;
  
  scanf("%d", &n);
  s = (struct student *)(malloc(n*sizeof(struct student)));
 
  for(i=0; i<n; i++)
    scanf("%s%s%f", s[i].name, s[i].surname, &s[i].cgpa);

  bubbleSort(s, n);
  print_sorted(s, n);
  range_search(5.0,  7.5, s, n);
  range_search(7.5,  8.5, s, n);
  range_search(8.5, 10.0, s, n);
  
  printf("\n");
  
  return 0;
}
