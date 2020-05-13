// Bubble Sort and Binary Search
 
#include<stdio.h>
#include<stdlib.h> //for malloc function

int binary_search(int x, int a[], int p, int q){
  if(p==q)
    if(x==a[p])
      return 1;
    else
      return 0;
  
  int m = (p+q)/2;
  
  if(x<=a[m])
    binary_search(x, a, p, m);
  else 
    binary_search(x, a, m+1, q);
}

  
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

void fill_array(int a[], int n){  
  int i;
  printf("Enter the elements: ");
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  
}

void print_sorted(int a[], int n){  
  int i;
  printf("\nSorted elements:\n");
  for(i=0; i<n; i++)
    printf("%d ", a[i]);
  printf("\n\n");
}

int main(){
  int n, *a, i, x;
  
  printf("\nEnter the number of elements: ");
  scanf("%d", &n);
  a = (int *)(malloc(n*sizeof(int)));  
  
  fill_array(a, n);
  bubble_sort(a, n);
  print_sorted(a, n);
  
  printf("Enter the key to be searched: ");
  scanf("%d", &x);  
  
  if(binary_search(x, a, 0, n-1))
    printf("%d is found.\n\n", x);
  else
    printf("%d is not found.\n\n", x);
  
  return 0;
}
