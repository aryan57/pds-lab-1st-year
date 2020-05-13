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
      if(s[j].cgpa < s[j+1].cgpa){ // swap the data of students j and j+1
        swap(&s[j], &s[j+1]);
      }
    }
  }
}

void printBarChart(struct student *s, int n){
  int i, j, bar[5];
  float x=9.0;

  for(i=0; i<5; i++)
    bar[i]=0;
  
  for(i=0; i<n; i++)
    bar[(int)(9.99-(int)(s[i].cgpa))]++;
  
  for(i=0; i<5; i++){
    printf("[%1.0f-%2.0f]: ", (float)(9-i), (float)(10-i));
    for(j=0; j<bar[i]; j++)
      printf("X");
    printf("\n");
  }
  printf("\n");
}

void print_output(struct student *s, int n){  
  int i;
  printf("\nSorted cgpa:\n");
  for(i=0; i<n; i++)
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
  printBarChart(s, n);
  
  return 0;
}
