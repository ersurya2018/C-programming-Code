//Write a C program to find sum and average of ten numbers using array.
#include<stdio.h>
main()
{
	int a[10],i,sum=0;
	float avg;
	printf("Enter the 10 number \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	avg=(float)sum/10;
	printf("sum = %d\n",sum);
	printf("avg = %.2f\n",avg);
}
