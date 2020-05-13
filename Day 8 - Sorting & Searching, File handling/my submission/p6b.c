/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/


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

void scan_matrix(FILE *fp1,int **a, int m, int n, int x){  
  int i, j;

  for(i=0; i<m; i++)
    for(j=0; j<n; j++)
      fscanf(fp1,"%d", &a[i][j]);
}

void multiply(int **a, int **b, int **c, int m, int n, int p){
  int i, j, k;
  for(i=0; i<m; i++)
    for(j=0; j<p; j++)
      for(c[i][j]=k=0; k<n; k++)
        c[i][j] += a[i][k] * b[k][j];
}

void print_output(FILE *fp3,int **a, int m, int n){  
  int i, j;

	fprintf(fp3,"%3d	%3d\n",m,n);

  for(i=0; i<m; i++, fprintf(fp3,"\n"))
    for(j=0; j<n; j++)
      fprintf(fp3,"%3d ", a[i][j]);
  fprintf(fp3,"\n");
}

int main(){

	FILE *fp1, *fp2, *fp3;
  int m, n, p, **a, **b, **c;

  
  fp1 = fopen("mat1.txt", "r");
  fp2 = fopen("mat2.txt", "r");
  fp3 = fopen("mat3.txt", "w");
  
  fscanf(fp1, "%d%d", &m,&n);
  fscanf(fp2, "%d%d", &n,&p);
  


  
  a = allocate_matrix(a, m, n);
  b = allocate_matrix(b, n, p);
  c = allocate_matrix(c, m, p);
  scan_matrix(fp1,a, m, n, 1);
  scan_matrix(fp2,b, n, p, 2);
  multiply(a, b, c, m, n, p);
  print_output(fp3,c, m, p);
  
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  return 0;
}
