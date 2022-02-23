/*
Write a C program to find compound interest.
A=P(1+r/100)n

*/
#include<stdio.h>
#include<math.h>
main()
{
	float p,res;
	int  r,n;
	printf("Enter Principal amount ,rate,time\n");
	scanf("%f%d%d",&p,&r,&n);
	res=p*pow((1+r/100),n);
	printf("Compound interest : %.2f",(res-p));
}
