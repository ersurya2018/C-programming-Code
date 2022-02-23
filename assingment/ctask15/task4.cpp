/*
Write a C program to accept number of units as input and calculate the electricity bill
*/
#include<stdio.h>
main()
{
	float a,b,res;
	printf("Enter a number : ");
	scanf("%f",&a);
	if(a<=150)
	{
		res=a*2.40;
	}
	else if(a>150 && a<=300)
	{
		b=a-150;
		res=(b*3.00)+(150*2.40);
	}
	else 
	{
		b=a-300;
		res=(b*3.20)+(150*2.40)+(150*3.0);	
	}
	printf("electricity bill is = %.2f",res);
}
