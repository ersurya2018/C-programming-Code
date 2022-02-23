/*
Write a C program to create a dynamic array of n numbers. Now find sum and average of
numbers of dynamic array.
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n,sum=0;
	float avg;
	int *p;
	printf("How many numbers you want to store ? ");
	scanf("%d",&n);
	p=(int *) calloc(n,sizeof(int));
	printf("Enter % number\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("you have entered following numbers : \n");
	for(i=0;i<n;i++)
	{
		sum=sum+p[i];
		
	}
	printf("Sum is : %d\n",sum);
	avg=(float)(sum/n);
	printf("average is : %.2f\n",avg);
	
}
