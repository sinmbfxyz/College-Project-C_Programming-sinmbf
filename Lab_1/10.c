#include<stdio.h>

void main(){
	int g;
	float kg;
	printf("Enter weight in grams: ");
	scanf("%d",&g);
	kg=(float)g/1000;
	printf("%d g = %g kg\n",g,kg);
}
