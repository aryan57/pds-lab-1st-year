/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>

double func(int value,int sl,int su,int tl,int tu, char temp){

	
	if (temp=='s'){

			double t;
			t= tl + (value-sl)*((tu-tl)/(su-sl));
			return t;			
			}
	if (temp=='t'){
			double s;
			s= sl + (value-tl)*((tu-tl)/(su-sl));
			return s;
			}
}

int main (){
	
	int sl,su,tl,tu,value;
	double ans;
	char temp;
	printf("enter the lower and upper limits of S");
	scanf("%d%d", &sl, &su);
	printf("enter the lower and upper limits of T");
	scanf("%d%d", &tl, &tu);
	printf("enter a value and its scale");
	scanf("%d\n%c", &value,&temp);
	ans = func(value,sl,su,tl,tu,temp);
	printf("equivalent value in another scale is : %lf" ,ans );
	return 0;
}


