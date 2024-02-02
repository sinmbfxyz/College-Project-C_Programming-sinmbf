#include<stdio.h>
#include<stdlib.h>

// Functions to take numbers as input
int take_num1(){
	int n1;
	printf("Enter a number: ");
	scanf("%d",&n1);
	return n1;
}

int take_num2(){
	int n2;
	printf("Enter a number: ");
	scanf("%d",&n2);
	return n2;
}

// Function to add
int addition(n1,n2){
	return n1+n2;
}

// Function to subtract
int subtraction(n1,n2){
	return n1-n2;
}

// Function to multiply
int multiplication(n1,n2){
	return n1*n2;
}

// Function to divide
float division(n1,n2){
	return (float)n1/n2;
}

// Function to find leap year
void leap_year(){
	system("cls");
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || (year%4==0 && year%100==0 && year%400==0)){
		printf("Leap Year");
	}
	else{
		printf("Not a leap year");
	}
}

// Main Function
void main(){
	int option,val1,val2,result;
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Calculate leap year\n");
	printf("\n");
	scanf("%d",&option);
	system("cls");
	switch(option){
		case 1:
			val1=take_num1();
			val2=take_num2();
			result=addition(val1,val2);
			printf("%d + %d = %d",val1,val2,result);
			break;
		case 2:
			val1=take_num1();
			val2=take_num2();
			result=subtraction(val1,val2);
			printf("%d - %d = %d",val1,val2,result);
			break;
		case 3:
			val1=take_num1();
			val2=take_num2();
			result=multiplication(val1,val2);
			printf("%d * %d = %d",val1,val2,result);
			break;
		case 4:
			val1take_nu=);m1(
			val2=take_num2();
			printf("%d / %d = %g",val1,val2,division(val1,val2));
			break;
		case 5:
			leap_year();
			break;
		default:
			printf("Invalid Choice");
	}
}
