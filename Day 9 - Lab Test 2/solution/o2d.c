// Overlapping discs drawing 
 
#include <stdio.h>
#include <stdlib.h>

struct disc{int x, y, r;};

int h=600, w=900; //global variables

int insideOneDisc(int x, int y, struct disc *d, int n){
  int k, inside=0; 
  for(k=0; k<n; k++){
    if((x-d[k].x)*(x-d[k].x) + (y-d[k].y)*(y-d[k].y) <= d[k].r * d[k].r + d[k].r){
      inside++;
    }
  }
  return (inside%2==1)?1:0;
}

void draw_discs(struct disc *d, int n, char *f1){
  int i, j, k, inside; 
  FILE *fp1;
  
  fp1 = fopen(f1, "w");
  fprintf(fp1, "P1\n%d %d\n", w, h);
  
  printf("\nAreas = ");
  for(i=0; i<n; i++){
    scanf("%d%d%d", &d[i].x, &d[i].y, &d[i].r);
    printf("%6.2f, ", 3.1416f*((float)d[i].r)*((float)d[i].r));
  }
  printf("\b\b.\n");
  
  for(i=0; i<h; i++){ //row
    for(j=0; j<w; j++){ //column 
      if(insideOneDisc(j, i, d, n)==1) //point is inside exactly one disc
        fputc('1', fp1);
      else
       fputc('0', fp1);
    }
    fputc('\n', fp1);
  }
  
  fclose(fp1);
}  

    
int main(){
  int n; //#discs
  struct disc *d; //disc array
  
  scanf("%d", &n);
  d = (struct disc *)(malloc(n*sizeof(struct disc)));
  
  draw_discs(d, n, "o2d.pbm");
  
  return 0;
}
