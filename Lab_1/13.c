#include<stdio.h>
#include<math.h>

void main(){
	int num;
	float pi=3.14,degree,sine,cosine,tangent;
	printf("Enter a number: ");
	scanf("%d",&num);
	degree=num*(pi/180);
	sine=sin(degree);
	cosine=cos(degree);
	tangent=tan(degree);
	printf("Sin%d = %g\nCos%d = %g\nTan%d = %g\n",num,sine,num,cosine,num,tangent);
}
