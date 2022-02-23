//Hii friends Today i am tell about Sum of two number without using "+ " opeartor
//Lets start
#include<stdio.h>
main()
{
	int a,b,sum=0;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second  number:\n");
	scanf("%d",&b);
	sum=(-(-a-b));
	printf("Sum of two number : %d",sum);
}
