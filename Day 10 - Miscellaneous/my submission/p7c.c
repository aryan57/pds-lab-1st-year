/*
Name - Aryan Agarwal
Roll Number - 19CS30005
Machine Number - 23
*/

#include <stdio.h>
#include <stdlib.h> // for dynamic allocation
#include <string.h>
//#include <math.h>

struct lifo
{
	char w;
	struct lifo *next;
};
typedef struct lifo stack;


void push (stack **top, char c)
{
	stack *new;
	new=(stack*)malloc(sizeof(stack));
	
	if(new==NULL)
	{
		printf("\nStack is Full...");
		exit(-1);
	}
	
	new->w=c;
	new->next=*top;
	*top=new;
}

char pop (stack **top)
{
	char t;
	stack *p;
	
	if (*top == NULL)
	{
		printf ("\n Stack is empty");
		exit(-1);
	}
	else
	{
		t = (*top)->w;
		p = *top;
		*top = (*top)->next;
		free (p);
		return t;
	}
}

int isempty (stack **top)
{
	if (*top == NULL) return 1;
	else return 0;
}

int main ()
{
	char s[100];
	int i=-1,flag=1;
	
	printf("Enter a math expression ('$' to end): ");
	scanf("%[^$]",s);
	printerr("%s",s);
	
	stack **top;
	*top=NULL;
	//top points to null indicating empty stack
	
	do
	{
		i++;
		char a,x;
		a=s[i];
		
		if(a=='('||a=='{'||a=='[') push(top,a);
		
		if(a==')'||a=='}'||a==']')
		{
			if(isempty(top))
			{
				printf("\nInvalid bracketing...");
				flag=0;
				exit(-1);
			}
			
			x=pop(top);
			if(a!=x)
			{
				printf("\nInvalid bracketing...");
				flag=0;
				exit(-1);
			}
		}
		
	}while(s[i]!='\0');
	
	if(!isempty(top))
			{
				printf("\nInvalid bracketing...");
				flag=0;
				exit(-1);
			}

	if(flag)printf("\nValid bracketing...");
	
	return 0;
}
