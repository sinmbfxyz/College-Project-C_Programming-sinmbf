#include<stdio.h>

void main(){
	int num,i,sum=0;
	printf("Enter the number of terms: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		sum+=i;
	}
	printf("The sum of %d natural numbers is %d\n",num,sum);
}
