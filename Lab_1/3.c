#include<stdio.h>

void main(){
	int n1,n2,sum,difference,rem;
	float quotient;
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);
	sum=n1+n2;
	difference=n1-n2;
	rem=n1%n2;
	quotient=(float)n1/n2;
	printf("Sum of %d and %d = %d\nDifference of %d and %d = %d\nRemainder of %d and %d = %d\nQuotient of %d and %d = %g\n",n1,n2,sum,n1,n2,difference,n1,n2,rem,n1,n2,quotient);
}
