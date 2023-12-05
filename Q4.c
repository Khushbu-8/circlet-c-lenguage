#include<stdio.h>

/*

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/
void main(){
	
int i,j,s;

for(i=1; i<=5; i++){
	for(s=1; s<=i; s++){
		printf(" ");
	}
	
	for(j=i; j<=5; j++){
		(j%2==1)?
		printf("1"):printf("0");
		
	}
	printf("\n");
}
}

