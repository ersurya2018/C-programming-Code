//
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,res=0;
	char op;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter operator : ");
	fflush(stdin);
	op=getchar();
	printf("Enter second number : ");
	scanf("%d",&b);
	switch(op)
	{
		case '+':
			res=a+b;
		break;
		case '-':
			res=a-b;
		break;
		case '*':
			res=a*b;
		break;
		case '/':
			res=a/b;
		break;
		default:
		printf("invalid choice \n");
	}
	printf("%d%c%d=%d",a,op,b,res);
}
