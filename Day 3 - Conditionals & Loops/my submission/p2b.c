/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>

int main (){
	int y;
	printf("enter year : ");
	scanf("%d", &y);

	if(y%400==0 || (y%4==0 && y%100!=0)){
	// checking by using logical or operator
		printf("year %d is a leap year", y);
	}
	else{
		printf("year %d is not a leap year", y);
	}
		
	return 0;
}
