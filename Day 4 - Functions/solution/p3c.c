//Farthest random point

#include<stdio.h>
#include<math.h>
#include <stdlib.h>

//global variables///////////////////////
int xc, yc; // center point coordinates
int xf, yf; // farthest point coordinates

double farthest(int i, int j, double d){
  double dnew = sqrt((double)((xc-i)*(xc-i) + (yc-j)*(yc-j)));
  if (dnew > d)
    d = dnew, xf = i, yf = j;
  return d;
}

void printPoint(int i, int p, char c){ 
  int k;
  switch(p){
    case 1:
      for (k=1; k<i; k++)
        printf(".");
      printf("+\n");
      break;
      
    case 2:
      if(c == '+'){
        for (k=1; k<i; k++)
          printf(".");
        printf("+");
        for (++k; k<xc; k++)
          printf(".");
        printf("X\n");
      }
      else{
        for (k=1; k<xc; k++)
          printf(".");
        printf("X");
        for (++k; k<i; k++)
          printf(".");
        printf("+\n");
      }
      break;
      
    default:
      break;
  }
}
    
int main(){
  int xm, ym, i, j;
  unsigned int seed;
  double d = -1.0;
  
  printf("Enter xm and ym: "); scanf("%d%d", &xm, &ym);
  printf("Enter seed for randomness: "); scanf("%d", &seed);
  srand(seed);
  
  xc = xm/2, yc = ym/2;
  
  for(j=1; j<=ym; j++){
    i = rand()%xm+1;
    if(j==yc){                 //print both C and P
      if (i<xc)
        printPoint(i, 2, '+'); //first print P, then print C
      else 
        printPoint(i, 2, 'X'); //first print C, then print P
    }
    else
      printPoint(i, 1, '+');   //print only P
      
    d = farthest(i, j, d);
  }
  
  printf("\nFarthest point = (%d,%d), distance = %6.2lf\n\n", xf, yf, d);
  return 0;
}
