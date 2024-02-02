#include<stdio.h>

void main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num==0){
		printf("Number equals zero");
	}
	else if(num>0){
		printf("%d is positive",num);
	}
	else{
		printf("%d is negative",num);
	}
}
