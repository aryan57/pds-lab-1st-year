// Dynamic memory allocation of 2D array and matrix transposing

#include<stdio.h>
#include<stdlib.h> //for malloc function

int **allocate_matrix(int **a, int m, int n){
  int i, j;
  
  a = (int **)(malloc(m*sizeof(int *)));
  if (a==NULL){ 
    printf("Memory allocation failed...\n");
    exit(0);
  }
  
  for(i=0; i<m; i++){
    a[i] = (int *)(malloc(n*sizeof(int)));
    if (a[i]==NULL){ 
      printf("Memory allocation failed...\n");
      exit(0);
    }
  }
  return a;
}

void scan_matrix(int **a, int m, int n){  
  int i, j;
  printf("Enter the input matrix:\n");
  for(i=0; i<m; i++)
    for(j=0; j<n; j++)
      scanf("%d", &a[i][j]);
}

void make_transpose(int **a, int **b, int m, int n){
  int i, j;
  for(i=0; i<m; i++)
    for(j=0; j<n; j++)
      b[j][i] = a[i][j];
}

void print_output(int **a, int m, int n){  
  int i, j;
  printf("Output matrix:\n");
  for(i=0; i<m; i++, printf("\n"))
    for(j=0; j<n; j++)
      printf("%d ", a[i][j]);
  printf("\n");
}

int main(){
  int m, n, **a, **b;
  
  printf("\nEnter #rows & #columns: ");
  scanf("%d%d", &m, &n);
  
  a = allocate_matrix(a, m, n);
  b = allocate_matrix(b, n, m);
  scan_matrix(a, m, n);
  make_transpose(a, b, m, n);
  print_output(b, n, m);
  
  return 0;
}
