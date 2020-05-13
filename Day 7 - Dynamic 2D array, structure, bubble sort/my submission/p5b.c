/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
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
  //printf("Enter the input matrix:\n");
  for(i=0; i<m; i++)
    for(j=0; j<n; j++)
      scanf("%d", &a[i][j]);
}

void print_output(int **a, int m, int n)
{  
  int i, j;
  
  printf("Output matrix:\n");
  
  for(i=0; i<m; i++, printf("\n"))
    for(j=0; j<n; j++)
      printf("%d ", a[i][j]);
  printf("\n");
}

void mult_matrix(int **a,int **b,int **c,int m,int n,int p)
{
	int i,j,k;
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<p; j++)
		{
			
			for(c[i][j]=0,k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
    
}

int main(){
  int m, n,p, **a, **b,**c;
  
  printf("\nEnter #rows & #columns of 1st matrix : ");
  scanf("%d%d", &m, &n);
  printf("\nEnter #columns of 2nd matrix : ");
  scanf("%d", &p);
  
  a = allocate_matrix(a, m, n);
  b = allocate_matrix(b, n, p);
  c = allocate_matrix(c, m, p);
  
  printf("Enter the matrix 1:\n");
  scan_matrix(a, m, n);
  
  printf("Enter the matrix 2:\n");
  scan_matrix(b, n, p);
  
  mult_matrix(a,b,c,m,n,p);
  print_output(c, m, p);
	
	return 0;
}
