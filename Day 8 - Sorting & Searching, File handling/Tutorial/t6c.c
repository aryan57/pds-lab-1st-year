// Circle drawing to pbm
 
#include<stdio.h>

int main(){
  FILE *fp1;
  int h, w, r, cx, cy, i, j; 
  
  printf("Enter radius: ");
  scanf("%d", &r);
  
  cx = r+20, cy = r+10; //center coordinates of the circle
  
  h = 2*cy; //height = #rows of the image
  w = 2*cx; //width = #columns of the image
  
  fp1 = fopen("t6c.pbm", "w");
  fprintf(fp1, "P1\n%d %d\n", w, h);
  
  for(i=0; i<h; i++){ //row
    for(j=0; j<w; j++){ //column 
      if((j-cx)*(j-cx) + (i-cy)*(i-cy) <= r*r+r) //why?
        fputc('1', fp1);
      else
        fputc('0', fp1);
    }
    fputc('\n', fp1);
  }
  
  fclose(fp1);
  
  return 0;
}
