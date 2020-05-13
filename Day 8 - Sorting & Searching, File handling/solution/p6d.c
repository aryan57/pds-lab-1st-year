// Random disc drawing with constraints
 
#include<stdio.h>
#include<math.h>
#include <stdlib.h>

struct point{int x, y;};

int h=401, w=601, r=19; //global variables

int new_point(int x, int y, struct point *p, int k){
  int i, new=1;
  for(i=0; i<k; i++)
    if((x==p[i].x)&&(y==p[i].y)){
      new=0; break;
    }
  return new;
}

void generate_centers(struct point *p, int n){
  int k, x, y;
  unsigned int seed;
  printf("Enter seed for randomness: "); scanf("%d", &seed);
  srand(seed);
  
  for(k=0; k<n; ){
    x = (rand()%((w-1)/(2*(r+1))))*(2*(r+1)) + r+1; 
    y = (rand()%((h-1)/(2*(r+1))))*(2*(r+1)) + r+1; 
    if(new_point(x,y,p,k)){
      p[k].x=x, p[k].y=y;
      k++;
    }
  }
}

void draw_discs(struct point *p, int n, char *f1){
  int i, j, k, inside; 
  FILE *fp1;
  
  fp1 = fopen(f1, "w");
  fprintf(fp1, "P1\n%d %d\n", w, h);
  
  for(i=0; i<h; i++){ //row
    for(j=0; j<w; j++){ //column 
      for(inside = k = 0; k<n; k++, inside = 0){
        if((j-p[k].x)*(j-p[k].x) + (i-p[k].y)*(i-p[k].y) <= r*r+r){
          inside = 1; break;
        }
      }
      if(inside) //point is inside some disc
        fputc('1', fp1);
      else
       fputc('0', fp1);
    }
    fputc('\n', fp1);
  }
  
  fclose(fp1);
}  

    
int main(){
  int n;
  struct point *p; //disc centers
  
  printf("Enter no. of discs: "); 
  scanf("%d", &n);
  p = (struct point *)(malloc(n*sizeof(struct point)));
  
  generate_centers(p, n);
  draw_discs(p, n, "p6d.pbm");
  
  return 0;
}
