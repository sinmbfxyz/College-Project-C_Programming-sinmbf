#include<stdio.h>

void main(){
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("Vowel");
			break;
		default:
			printf("Consonant");
			
	}
}
