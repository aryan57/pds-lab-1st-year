//Linear interpolation

#include <stdio.h>

float interpolate(float x, float s_l, float s_u, float t_l, float t_u, char scale){
  float res = 0;
  if (scale == 'S' || scale == 's')
    res = t_l + (x - s_l)*(t_u - t_l)/(s_u - s_l);
  else 
    res = s_l + (x - t_l)*(s_u - s_l)/(t_u - t_l);
  return res;
}

int main()
{
  float s_l, s_u, t_l, t_u, val, res;
  char scale;
  
  printf("Enter the lower and upper limits of scale S: ");
  scanf("%f%f", &s_l, &s_u);
  
  printf("Enter the lower and upper limits of scale T: ");
  scanf("%f%f", &t_l, &t_u);
  
  printf("Enter a value and its scale (Ex: 50.8 S or 33.7 T): ");
  scanf("%f %c", &val, &scale);

  if(scale == 'S' || scale == 's')
    printf("Equivalent value in T = %f.\n", interpolate(val, s_l, s_u, t_l, t_u, scale));
  else if(scale == 'T' || scale == 't')
    printf("Equivalent value in S = %f.\n", interpolate(val, s_l, s_u, t_l, t_u, scale));
  else
    printf("\nWrong scale name entered.\n");
  
  return 0;
}
