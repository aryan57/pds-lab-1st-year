/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

// Circle drawing to pbm
 
#include<stdio.h>
#include <stdlib.h>

int main(){
  FILE *fp1;
  int n,h=401, w=601, r=19, cx, cy, i, j,k,flag;
  unsigned int seed;
  
  printf("enter no of circles n : ");
  scanf("%d",&n);
  printf("enter seed : ");
  scanf("%d",&seed);
  srand(seed);

  int arr[150][2];
  
  for(i=0;i<n;i++)
  {
  		arr[i][0]= rand()%(w-r)+1;
  		arr[i][1]= rand()%(h-r)+1;
  }
  
  

  
  fp1 = fopen("t6d.pbm", "w");
  fprintf(fp1, "P1\n%d %d\n", w, h);
  
for(i=0; i<h; i++){ //row
	for(j=0; j<w; j++){ //column 
		flag=0;
		for(k=0;k<n;k++)
    		 {
			cx=arr[k][0];cy=arr[k][1];
			if((j-cx)*(j-cx) + (i-cy)*(i-cy) <= r*r+r) {flag=1;break;}
		}
		fprintf(fp1,"%d",flag);
	}
	fputc('\n', fp1);
  }

printf("\nfile created\nopen t6d.pbm in the same folder....\n");
fclose(fp1);
  
  return 0;
}
