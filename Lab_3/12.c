#include<stdio.h>

void main(){
	int salary;
	float tax,salary_with_tax;
	printf("Enter the annual salary of the employee: ");
	scanf("%d",&salary);
	if(salary<=400000){
		tax=0.01*salary;
	}
	else if(salary<=500000){
		tax=0.01*400000+0.1*(salary-400000);
	}
	else{
		tax=0.01*400000+0.1*100000+0.2*(salary-500000);
	}
	salary_with_tax=salary-tax;
	printf("The actual salary of the employee = %.2f\nTax Deducted = %.2f\n",salary_with_tax,tax);
}
