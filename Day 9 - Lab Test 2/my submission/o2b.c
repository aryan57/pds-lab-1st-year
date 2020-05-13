/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
#include <string.h>

int main ()
{
	char s[100]="\0",s1[100];
	int i=0;
	
	while(strcmp(s,"---End---"))
	{
		scanf("%[^\n]",s);
		if(strcmp(s,s1))i++;
		strcpy(s1,s);/* copying string s to another string for 
					checking bcoz when there is just a space
		 			it does not qualify as a line*/
		getchar();// for going to next line
	}
	printf("\n#lines = %d\n",i-1); // i-1 bcoz one line for ---End--- is also counted
	return 0;
}
