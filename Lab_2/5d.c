#include<stdio.h>

void main(){
	int n1,n2,n3,n4,res1,res2;
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);
	printf("Enter third number: ");
	scanf("%d",&n3);
	printf("Enter fourth number: ");
	scanf("%d",&n4);
	/* Using Ternery Operator 
	res1=(n1<n2)?n1:n2;
	res2=(n3<n4)?n3:n4;
	(res1<res2)?printf("%d is the smallest\n",res1):printf("%d is the smallest\n",res2);
	*/
	// Using If else
	if(n1<n2){
		res1=n1;
	}
	else{
		res1=n2;
	}
	if(n3<n4){
		res2=n3;
	}
	else{
		res2=n4;
	}
	if(res1<res2){
		printf("%d is the smallest\n",res1);
	}
	else{
		printf("%d is the smallest\n",res2);
	}
	
	
}
