//WAP to find factorical of given number  using recursion.
#include<stdio.h>
long int fact(int);
main()
{
	int x;
	long int f;
	printf("Enter a number to find factorial : ");
	scanf("%d",&x);
	f=fact(x);
	printf("factorial : %ld\n",f);
	
}
long int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
