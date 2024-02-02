#include<stdio.h>

void main(){
	float salary,salary_with_bonus;
	char gender;
	printf("Enter the salary: ");
	scanf("%f",&salary);
	fflush(stdin);
	printf("Enter gender of the employee: ");
	scanf("%c",&gender);
	if(salary<10000){
		salary_with_bonus=0.02*salary+salary;
		if(gender=='m'){
			salary_with_bonus=0.05*salary+salary_with_bonus;
		}
		else{
			salary_with_bonus=0.1*salary+salary_with_bonus;
		}
	}
	else{
		if(gender=='m'){
			salary_with_bonus=0.05*salary+salary;
		}
		else{
			salary_with_bonus=0.1*salary+salary;
		}
	}
	printf("Bonus = %.2f\n",salary_with_bonus-salary);
	printf("Salary with bonus = %.2f\n",salary_with_bonus);
	
}
