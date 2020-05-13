// generate n random numbers and find their largest

#include<stdio.h>
#include <stdlib.h>

int max(int a, int b){
	if(a > b) return a;
	else return b;
}

int main(){
	int n,i,largest = -1, r;
	unsigned int seed ;
	printf("Enter n, seed:");
	scanf("%d%d", &n, &seed);
	
	srand(seed);
	printf("generated random numbers::\n");
	for(i = 0 ; i < n ; i++){	
		r = 10+rand()%11;	
		largest  = max(largest,r);	
		printf("%d ", r);	
	}
	
	printf("\nlargest = %d\n", largest);
	return 0;
}

