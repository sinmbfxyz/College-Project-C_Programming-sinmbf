#include<stdio.h>

void main(){
	int num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	// Using Ternary Operator 
	/*
	(num>0)
		?printf("%d is positive\n",num)
	:(num<0)
		?printf("%d is negative\n",num)
	:printf("%d is equal to zero\n",num);
	*/
	// Using If else 
	if(num>0){
		printf("%d is positive\n",num);
	}
	else if(num<0){
		printf("%d is negative\n",num);
	}
	else{
		printf("%d is equal to zero\n",num);
	}
}
