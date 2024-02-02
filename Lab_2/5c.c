#include<stdio.h>

void main(){
	int n1,n2;
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);
	(n1>n2)
		?printf("The difference of %d and %d is %d\n",n1,n2,n1-n2)
		:printf("The sum of %d and %d is %d\n",n1,n2,n1+n2);
}
