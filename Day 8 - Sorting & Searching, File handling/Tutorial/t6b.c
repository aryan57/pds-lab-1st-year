// File processing
 
#include<stdio.h>

int main(){
  FILE *fp1, *fp2, *fp3;
  int n, i, k;
  char s[50];
  
  fp1 = fopen("f1.txt", "r");
  fp2 = fopen("f2.txt", "r");
  fp3 = fopen("f3.txt", "w");
  
  fscanf(fp1, "%d", &n);
  fscanf(fp2, "%d", &n);
  fprintf(fp3, "%d\n", n);
  
  for(i=0; i<n; i++){
    fscanf(fp1, "%d", &k);
    fscanf(fp2, "%s", s);
    fprintf(fp3, "%2d %s\n", k, s);
  }
  
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  
  return 0;
}
