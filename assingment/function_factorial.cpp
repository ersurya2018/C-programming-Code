//Write a C program to find factorial of given number using ‘Recursion’.
#include<stdio.h>
main()
{
	int num,res;
	int fact(int);
	printf("Enter a number ");
	scanf("%d",&num);
	res=fact(num);
	printf(" Factorical is : %d",res);
}
int fact(int x)
{
	int sum=1;
	while(x>1)
	{
		sum=sum*x;
		x--;
	}
	return(sum);
}

