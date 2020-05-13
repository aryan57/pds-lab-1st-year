// Bubble Sort

#include<stdio.h>
#include<stdlib.h> //for malloc function

void bubble_sort(int a[], int n){  
  int i, j, t;
  /* a[i..n-1] is already sorted and 
   * a[0..i-1] is yet to be sorted */
  for(i=n-1; i>0; i--){
    for(j=0; j<i; j++){
      if(a[j]>a[j+1]){
        t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
      }
    }
  }
}

void read_input(int a[], int n){  
  int i;
  printf("Enter the elements: ");
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
}

void print_output(int a[], int n){  
  int i, j;
  printf("\nSorted elements:\n");
  for(i=0; i<n; i++, printf("\n"))
    for(printf("%2d ", a[i]), j=0; j<a[i]; j++)
      printf("X");
  printf("\n\n");
}

int main(){
  int n, *a, i;
  
  printf("\nEnter the number of elements: ");
  scanf("%d", &n);
  a = (int *)(malloc(n*sizeof(int)));
  
  read_input(a, n);
  bubble_sort(a,n);
  print_output(a, n);
  
  return 0;
}
