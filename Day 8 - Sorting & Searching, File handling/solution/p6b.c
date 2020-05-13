// File reading + writing, dynamic memory allocation, and matrix multiplication

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

int **scan_matrix(int **a, int *m, int *n, char *f){  
  int i, j;
  FILE *fp = fopen(f, "r");
  fscanf(fp, "%d%d", m, n);
  a = allocate_matrix(a, *m, *n);
  
  for(i=0; i<*m; i++)
    for(j=0; j<*n; j++)
      fscanf(fp, "%d", &a[i][j]);
    
  fclose(fp);
    
  return a;
}

void multiply(int **a, int **b, int **c, int m, int n, int p){
  int i, j, k;
  for(i=0; i<m; i++)
    for(j=0; j<p; j++)
      for(c[i][j]=k=0; k<n; k++)
        c[i][j] += a[i][k] * b[k][j];
}

void print_matrix(int **a, int m, int n, char *f){  
  int i, j;
  printf("\n%s:\n", f);
  for(i=0; i<m; i++, printf("\n"))
    for(j=0; j<n; j++)
      printf("%3d ", a[i][j]);
}

void store_matrix(int **a, int m, int n, char *f){  
  int i, j;
  FILE *fp = fopen(f, "w");
  fprintf(fp, "%3d %3d\n", m, n);
  for(i=0; i<m; i++, fprintf(fp, "\n"))
    for(j=0; j<n; j++)
      fprintf(fp, "%3d ", a[i][j]);
  fclose(fp);
}

int main(){
  int m, n, p, **a, **b, **c;
  
  a = scan_matrix(a, &m, &n, "mat1.txt");
  b = scan_matrix(b, &n, &p, "mat2.txt");
  c = allocate_matrix(c, m, p);
  
  multiply(a, b, c, m, n, p);
  store_matrix(c, m, p, "mat3.txt");
  
  print_matrix(a, m, n, "Input Matrix 1");
  print_matrix(a, m, n, "Input Matrix 2");
  print_matrix(c, m, p, "Product Matrix");
  
  return 0;
}
