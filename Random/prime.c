#include<stdio.h>

void main(){
	int flag=1,num,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i==0){
			flag=0;
			break;
		}
	}
	if(flag){
		printf("%d is a prime number\n",num);
	}
	else{
		printf("%d is not a prime number\n",num);
	}
}
