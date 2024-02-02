#include<stdio.h>

void main(){
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if(ch<=90){
		printf("%c into lowercase : %c\n",ch,ch+32);
	}
	else{
		printf("%c into uppercase : %c\n",ch,ch-32);
	}
}
