/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>



int main (){

	int  a,b,c,d,max=a,p,q,r;
/*
p,q,r are used here as a pick and drop variables
i have initially taken maximum as a
then updated the variiables max,p,q,r using if condition 
*/
	printf("\nEnter four positive integers : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	p=b;q=c;r=d;

	if(max<b){p=max;max=b;}
	if(max<c){q=max;max=c;}
	if(max<d){r=max;max=d;}

	if(max>3*p && max>3*q && max>3*r)
		printf("\nyes : %d\n",max);
	else
		printf("\nno\n");
	
	return 0;
}


/*first i made this code but i found this less efficient so i added this in comment

#include <stdio.h>

int main(){

	int  a,b,c,d;

	printf("\nEnter four positive integers : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
 
	if(a>3*b && a>3*c && a>3*d)
		printf("\nyes : %d",a);
	if(b>3*a && b>3*c && b>3*d)
		printf("\nyes : %d",b);
	if(c>3*a && c>3*b && c>3*d)
		printf("\nyes : %d",c); 
	if(d>3*a && d>3*b && d>3*c)
		printf("\nyes : %d \n",d);
	else
		printf("\n no \n");
return 0;
}
*/
