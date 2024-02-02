#include<stdio.h>

void main(){
	int num,rem,sum=0;
	printf("Enter a three digit number: ");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("The sum of the first digit number is %d\n",sum);
}
