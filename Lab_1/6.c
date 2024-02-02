#include<stdio.h>

void main(){
	int n1,n2,n3;
	float average;
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);
	printf("Enter third number: ");
	scanf("%d",&n3);
	average=(float)(n1+n2+n3)/3;
	printf("The average of %d, %d and %d is %g\n",n1,n2,n3,average);
}
