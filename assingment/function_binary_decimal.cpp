//Write a C Program to convert binary number to its decimal equivalent using user defined
//function.
#include<stdio.h>
#include<math.h>
main()
{
	int num,res;
	int rf;
	int binary(int);
	printf("ENter binary number ");
	scanf("%d",&num);
	res=binary(num);
	printf("decimal  number is: %d",res);
}
int binary(int x)
{
	int rf,sum=0,p=0;
	while(x>0)
	{
		rf=x%10;
		sum=sum+rf*pow(2,p);
		p++;
		x=x/10;
	}
	return (sum);
}
