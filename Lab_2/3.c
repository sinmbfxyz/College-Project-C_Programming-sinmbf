#include<stdio.h>

void main(){
	int num,rev=0,rem,cnum;
	printf("Enter a three digit number: ");
	scanf("%d",&num);
	cnum=num;
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	printf("The reverse of %d is %d\n",cnum,rev);
}
