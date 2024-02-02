#include<stdio.h>

void main(){
	int indian_SP;
	float nep_SP;
	printf("Enter selling price in Indian Currency: ");
	scanf("%d",&indian_SP);
	nep_SP=1.60*indian_SP;
	printf("%d Indian SP = %g Nepalese SP\n",indian_SP,nep_SP);
}
