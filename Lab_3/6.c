#include<stdio.h>

void main(){
	int year1,year2,year3,month1,month2,month3,day1,day2,day3;
	printf("Enter the current date[YY-MM-DD]: ");
	scanf("%d-%d-%d",&year1,&month1,&day1);
	printf("Enter your birth date[YY-MM-DD]: ");
	scanf("%d-%d-%d",&year2,&month2,&day2);
	year3=year1-year2;
	month3=month1-month2;
	day3=day1-day2;
	if(day3<0){
		month3--;
		day3=day3+30;
	}
	if(month3<0){
		year3--;
		month3=month3+12;
	}
	printf("Your age is %d years, %d months and %d days\n",year3,month3,day3);
	
}
