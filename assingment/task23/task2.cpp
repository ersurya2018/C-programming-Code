#include<stdio.h>
main()
{
	int  a,b,c=0,m=0,i;
	
	printf("Enter first number \n");
	scanf("%d",&a);
	printf("Enter second number \n");
	scanf("%d",&b);
	
	c=(a-(-b));
	printf("sum1=%d\n",c);
	c=-(-a-b);
	printf("sum2=%d\n",c);
	c=a+((~b)+1);
	printf("sub1=%d\n",c);
	c=~(b+((~a)+1))+1;
	printf("sub2=%d\n",c);
	
	for(i=1;i<=b;i++)
	{
		m=(m+a);
	}
	printf("mul1=%d",m);
}
