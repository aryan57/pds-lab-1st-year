// List of triangles 

#include<stdio.h>
#include<stdlib.h>

struct point{
  int x, y;
};

struct triangle{
  struct point v[3];
};

int main(){
  int n, i, j;
  struct triangle *t;
  
  scanf("%d", &n);
  t = (struct triangle *)malloc(n*sizeof(struct triangle));
  
  for(i=0; i<n; i++){
    for(j=0; j<3; j++)
      scanf("%d%d", &t[i].v[j].x, &t[i].v[j].y);
  }
  
  printf("\nTriangles:\n");
  
  for(i=0; i<n; i++){
    printf("T%d: ",i+1);
    for(j=0; j<3; j++)
      printf("(%2d, %2d)%c ", t[i].v[j].x, t[i].v[j].y, (j<2)?',':' ');
    printf("\n");
  }
  
  return 0;
}
