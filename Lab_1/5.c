#include<stdio.h>

void main(){
	int dollar;
	float nep_rupees;
	printf("Enter dollar amount: ");
	scanf("%d",&dollar);
	nep_rupees=dollar*133.33;
	printf("%d dollars into nepalese rupees = %g\n",dollar,nep_rupees);
}
