#include<stdio.h>
#include<math.h>

void main(){
	int num;
	float sqr_root;
	printf("Enter a number: ");
	scanf("%d",&num);
	sqr_root=(float)sqrt(num);
	printf("The square root of %d is %g\n",num,sqr_root);
}
