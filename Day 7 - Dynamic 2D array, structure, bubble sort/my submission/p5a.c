/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
#include<stdlib.h> //for malloc function

typedef struct
{
	char name[15];
	char surname[15];
	float cgpa;
} student;


void bubble_sort(student *array,int n){  
  int i, j, t;
  
  student temp;
  
  for(i=n-1; i>0; i--){
    for(j=0; j<i; j++){
      if(array[j].cgpa<array[j+1].cgpa)
      {
       	temp=array[j];
		array[j]=array[j+1];
		array[j+1]=temp;
      }
    }
  }
}

int main ()
{
	int i,n,range910=0,range89=0,range78=0,range67=0,range56=0;
	scanf("%d",&n);
	
	student *s;
	s=(student*)(malloc(n*sizeof(student)));
	
	for(i=0;i<n;i++)
	{
		scanf("%s %s %f",s[i].name,s[i].surname,&s[i].cgpa);
		if(s[i].cgpa<=10 && s[i].cgpa>=9) range910++;
		if(s[i].cgpa<9 && s[i].cgpa>=8) range89++;
		if(s[i].cgpa<8 && s[i].cgpa>=7) range78++;
		if(s[i].cgpa<7 && s[i].cgpa>=6) range67++;
		if(s[i].cgpa<6 && s[i].cgpa>=5) range56++;
	}
	
	bubble_sort(s,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d:	%c. %s %4.2f\n",i+1,s[i].name[0],s[i].surname,s[i].cgpa);
	}
	
	printf("\n[9-10] : ");
	for(i=1;i<=range910;i++)printf("X");
	printf("\n[8-9] : ");
	for(i=1;i<=range89;i++)printf("X");
	printf("\n[7-8] : ");
	for(i=1;i<=range78;i++)printf("X");
	printf("\n[6-7] : ");
	for(i=1;i<=range67;i++)printf("X");
	printf("\n[5-6] : ");
	for(i=1;i<=range56;i++)printf("X");
	
	printf("\n\n");
	
	return 0;
}
