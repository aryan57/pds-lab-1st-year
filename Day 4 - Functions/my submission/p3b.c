/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>

int power(int x, int n){
	int value,i;
	for (i=0,value=1; i<n; i++){
	value*=x;
	}
return value;
}


int main (){
	int s,t,n;
	printf("enter s and t : ");
	scanf("%d%d" ,&s,&t);
	
	for(n=0; power(s,n)<=t; n++){
}
	printf("largest n : %d", --n);
	
	return 0;
}
