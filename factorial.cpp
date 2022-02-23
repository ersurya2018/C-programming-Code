//WAP to find factorial of given number
#include<stdio.h>
main()
{
	int n,f=1;
	printf("Enter a number to find factorial : \n");
	scanf("%d",&n);
	int num=n;
	while(n>0)
	{
	f=f*n;
	n--;
	}
	printf("factorial of %d is=%d",num,f);	
}
