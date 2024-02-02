#include<stdio.h>

void main(){
	int num,rem,sum=0,sqr;
	printf("Enter a four digit number: ");
	scanf("%d",&num);
	rem=num%10;
	sum=rem*rem+sum;
	num=num/10;
	rem=num%10;
	sum=rem*rem+sum;
	num=num/10;
	rem=num%10;
	sum=rem*rem+sum;
	num=num/10;
	rem=num%10;
	sum=rem*rem+sum;
	num=num/10;
	printf("The sum is %d",sum);
}
