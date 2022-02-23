//Write a C program to print series of even numbers from 1-100.
#include<stdio.h>
main()
{
	int a=1;
	while(a<=100)
	{
		//printf("%d",a);
		if(a%2==0)
		{
			printf("%d\t",a);
		}
		a++;
	}
}
