#include<stdio.h>

void main(){
	char ch;
	printf("Enter a character: ");
	ch=getchar();
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
		printf("It is an alphabet");
	}
	else if(ch>='1' && ch<='9'){
		printf("It is a digit");
	}
	else{
		printf("It is a special character");
	}
}
