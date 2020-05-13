// find the largest of two nos.

#include<stdio.h>

int max(int a, int b){
	if( a > b)
		return a;
	else 
		return b;
}

int main(){
	int a , b , c;
	printf("Enter 2 numbers:");
	scanf("%d%d", &a , &b);
	
	c = max(a, b);
	printf("max: %d\n",c);

	return 1;
	
}
