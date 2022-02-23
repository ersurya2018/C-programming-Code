// add two number without using + opeartor
#include<stdio.h>
main()
{
	int a,b,sum=0;
	printf("Enter first number \n");
	scanf("%d",&a);
	printf("Enter second number \n");
	scanf("%d",&b);
	sum=(a+(~b)+1);
	printf("%d",sum);
}
