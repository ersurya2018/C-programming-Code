//Write a C program to find sum and average of ten numbers using for loop.
#include<stdio.h>
main()
{
	int i,n;
	float sum=0,avg=0;
	printf("Enter any 10 number \n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("sum of 1 to 10 =%.2f\n",sum);
	avg=sum/10;
	printf("avg  of 1 to 10 =%.2f",avg);
}
