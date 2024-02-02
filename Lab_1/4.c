#include<stdio.h>

void main(){
	int amount;
	float total_amount;
	printf("Enter the amount: ");
	scanf("%d",&amount);
	total_amount=amount+0.05*amount;
	printf("The total amount with tax = %g\n",total_amount);
}
