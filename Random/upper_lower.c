#include<stdio.h>

int main(){
	char c,convert;
	printf("Enter a upper case letter: ");
	scanf("%c",&c);
	if(c<97){
		printf("%c into lowercase = %c\n",c,c+32);
	}
	else{
		printf("%c into uppercase = %c\n",c,c-32);
	}
	return 0;
}
