#include<stdio.h>

void main(){
	int r;
	const float PI=3.1416;
	float area;
	printf("Enter the radius of the circle: ");
	scanf("%d",&r);
	area=PI*r*r;
	printf("The area of the circle is %.2f\n",area);
}
