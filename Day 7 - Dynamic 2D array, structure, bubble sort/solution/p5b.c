// Dynamic memory allocation and matrix multiplication

#include<stdio.h>
#include<stdlib.h> //for malloc function

int **allocate_matrix(int **a, int m, int n){
  int i;
  
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

void scan_matrix(int **a, int m, int n, int x){  
  int i, j;
  printf("Enter Matrix %d:\n", x);
  for(i=0; i<m; i++)
    for(j=0; j<n; j++)
      scanf("%d", &a[i][j]);
}

void multiply(int **a, int **b, int **c, int m, int n, int p){
  int i, j, k;
  for(i=0; i<m; i++)
    for(j=0; j<p; j++)
      for(c[i][j]=k=0; k<n; k++)
        c[i][j] += a[i][k] * b[k][j];
}

void print_output(int **a, int m, int n){  
  int i, j;
  printf("Output matrix:\n");
  for(i=0; i<m; i++, printf("\n"))
    for(j=0; j<n; j++)
      printf("%3d ", a[i][j]);
  printf("\n");
}

int main(){
  int m, n, p, **a, **b, **c;
  
  printf("\nEnter #rows & #columns of 1st matrix: ");
  scanf("%d%d", &m, &n);
  printf("Enter #columns of 2nd matrix: ");
  scanf("%d", &p);
  
  a = allocate_matrix(a, m, n);
  b = allocate_matrix(b, n, p);
  c = allocate_matrix(c, m, p);
  scan_matrix(a, m, n, 1);
  scan_matrix(b, n, p, 2);
  multiply(a, b, c, m, n, p);
  print_output(c, m, p);
  
  return 0;
}
