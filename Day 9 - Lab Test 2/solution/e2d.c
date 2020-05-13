// Overlapping rectangles drawing 
 
#include <stdio.h>
#include <stdlib.h>

struct rect{int x1, y1, x2, y2;};

int h=400, w=600; //global variables

int insideOneRect(int x, int y, struct rect *d, int n){
  int k, inside=0; 
  for(k=0; k<n; k++, inside==0){
    if(x>=d[k].x1 && x<=d[k].x2 && y>=d[k].y1 && y<=d[k].y2){
      inside++;
    }
  }
  return inside;
}

void draw_rects(struct rect *d, int n, char *f1){
  int i, j, k, inside; 
  FILE *fp1;
  
  fp1 = fopen(f1, "w");
  fprintf(fp1, "P1\n%d %d\n", w, h);

  printf("\nAreas = ");
  for(i=0; i<n; i++){
    scanf("%d%d%d%d", &d[i].x1, &d[i].y1, &d[i].x2, &d[i].y2);
    printf("%d, " , (d[i].x2-d[i].x1)*(d[i].y2-d[i].y1));
  }
  printf("\b\b.\n");
  
  for(i=0; i<h; i++){ //row
    for(j=0; j<w; j++){ //column 
      if(insideOneRect(j, i, d, n)==1) //point is inside exactly one rect
        fputc('1', fp1);
      else
       fputc('0', fp1);
    }
    fputc('\n', fp1);
  }
  
  fclose(fp1);
}  

    
int main(){
  int n; //#rects
  struct rect *d; //rect array
  
  scanf("%d", &n);
  d = (struct rect *)(malloc(n*sizeof(struct rect)));
  
  draw_rects(d, n, "e2d.pbm");
  
  return 0;
}
