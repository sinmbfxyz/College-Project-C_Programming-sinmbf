#include<stdio.h>

void main(){
	int r;
	float pi=3.14,area,circumference;
	printf("Enter radius: ");
	scanf("%d",&r);
	area=pi*r*r;
	circumference=2*pi*r;
	printf("The area of the circle=%.2f\n",area);
	printf("The circumference of the circle=%.2f\n",circumference);
}
