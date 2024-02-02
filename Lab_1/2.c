#include<stdio.h>

void main(){
	int l,b,h,volume;
	printf("Enter length: ");
	scanf("%d",&l);
	printf("Enter breadth: ");
	scanf("%d",&b);
	printf("Enter height: ");
	scanf("%d",&h);
	volume=l*b*h;
	printf("The volume of the box is %d\n",volume);
}
