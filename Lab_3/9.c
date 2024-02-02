#include<stdio.h>

void main(){
	int consumption;
	float total_bill;
	printf("Enter the consumption of electricity: ");
	scanf("%d",&consumption);
	if(consumption<=150){
		total_bill=consumption*3;
	}
	else if(consumption<=350){
		total_bill=(150*3)+3.75*(consumption-150)+100;
	}
	else if(consumption<=450){
		total_bill=(150*3)+(200*3.75)+((consumption-350)*4)+250;
	}
	else{
		total_bill=(150*3)+(200*3.75)+(100*4)+((consumption-450)*4.25)+300;
	}
	printf("Your total bill = Rs %.2f\n",total_bill);
}
