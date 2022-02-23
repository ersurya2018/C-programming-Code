//WAP to generate Fibonacci Series up to n term,where value of n is entered by user
#include<stdio.h>
main()
{
	int n1=0,n2=1,n3,n,i;
	printf("How mmany term you want in series? ");
	scanf("%d",&n);
	printf("%d\t%d\t",n1,n2);
	for(i=1;i<=n-2;i++)
	{
		n3=n1+n2;                   
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
	}
}
