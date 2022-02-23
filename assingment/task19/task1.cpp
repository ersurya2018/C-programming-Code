//Write a C program to print the series of prime numbers from 1-100.
#include<stdio.h>
main()
{
int i,j,n,r,c;
for(i=1;i<=100;i++)
{	c=0;
	for(j=1;j<=i;j++)
	{
		r=i%j;
		if(r==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d \t",i);
	}
}

}
