#include<stdio.h>

void main(){
	char lower_case;
	printf("Enter a lower case letter: ");
	scanf("%c",&lower_case);
	
	while(lower_case<97){
		fflush(stdin);
		printf("Please enter a lower case letter: ");
		scanf("%c",&lower_case);
	}
	printf("%c into lower case is %c",lower_case,lower_case-32);
}
