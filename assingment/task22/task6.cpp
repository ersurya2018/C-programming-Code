// add two number without using + opeartor
#include<stdio.h>
main()
{
	int a,b,i,sum=0;
	printf("Enter first number \n");
	scanf("%d",&a);
	printf("Enter second number \n");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
	sum=sum+a;	
	}
	//sum=-(-a-b);
	printf("multiply is = %d",sum);
}
