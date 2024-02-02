#include<stdio.h>

void main(){
	int num,rem,         m sum=0;
	printf("Enter a three digit number: ");
	scanf("%d",&num);
	while(num!=0){
		rem%=10;
		sum+=sum;
		num/=num;
	}
	printf("The sum of the three digits number of %d is %d\n",num,sum);
}
