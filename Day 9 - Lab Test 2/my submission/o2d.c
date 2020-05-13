/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
#include <stdlib.h> // for dynamic allocation

int h=600, w=900;

typedef struct {
int x,y,r;
} cir;

void draw_discs(cir *p, int n, char *f1){
  int i, j, k, inside,count; 
  FILE *fp1;
  
  fp1 = fopen(f1, "w");
  fprintf(fp1, "P1\n%d %d\n", w, h);
  
  for(i=0; i<h; i++){ //row
    for(j=0; j<w; j++){ //column 
      for(inside = k = count = 0; k<n; k++, inside = 0){if((j-p[k].x)*(j-p[k].x) + (i-p[k].y)*(i-p[k].y) <= p[k].r*p[k].r+p[k].r){count++;}}
          if(count%2==1){inside = 1;}
       
      if(inside) //point is inside some disc
        fputc('1', fp1);
      else
       fputc('0', fp1);
    }
    fputc('\n', fp1);
  }
  
  fclose(fp1);
} 

int main ()
{
	int i,n;
	scanf("%d",&n);
	
	cir *a;
	a=(cir*)(malloc(n*sizeof(cir)));
	
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].r);
	}
	
	printf("Areas = ");
	for(i=0;i<n;i++)
	{
		printf("%f,	", 3.1416*(a[i].r)*(a[i].r));
	}

	draw_discs(a, n, "o2d.pbm");
  
  return 0;
}
