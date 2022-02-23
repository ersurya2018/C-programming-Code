//Write a C program to convert binary number to its decimal equivalent.
#include<stdio.h>
main()
{
	int a,r,s=0,base=1;
	printf("Enter a number : ");
	scanf("%d",&a);
	while(a>0)
	{
		r=a%10;
		s=s+r*base;
		base=base*2;
		//dec=dec+rem*pow(base,p);
		a=a/10;
	}
	printf("%d",s);
}
