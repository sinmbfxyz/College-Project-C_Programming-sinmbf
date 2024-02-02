#include<stdio.h>

void main(){
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
		printf("%c is a vowel letter\n",ch);
	}
	else{
		printf("%c is a consonant\n",ch);
	}
}
