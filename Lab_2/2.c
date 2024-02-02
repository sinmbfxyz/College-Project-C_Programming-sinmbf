#include<stdio.h>

void main(){
	char upper_case;
	printf("Enter a upper case letter: ");
	scanf("%c",&upper_case);
	while(upper_case>=97){
		fflush(stdin);
		printf("Please enter a upper case letter: ");
		scanf("%c",&upper_case);
	}
	printf("%c into lower case is %c",upper_case,upper_case+32);
}
