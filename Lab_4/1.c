#include<stdio.h>

void main(){
	char ch;
	int n1,n2;
	printf("Enter the operation to conduct[+,-,*,/]: ");
	scanf("%c",&ch);
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);
	switch(ch){
		case '+':
			printf("%d + %d = %d\n",n1,n2,n1+n2);
			break;
		case '-':
			printf("%d - %d = %d\n",n1,n2,n1-n2);
			break;
		case '*':
			printf("%d * %d = %d\n",n1,n2,n1*n2);
			break;
		case '/':
			printf("%d / %d = %.2f\n",n1,n2,(float)n1/n2);
			break;
		default:
			printf("Invalid choice");
	}
}
