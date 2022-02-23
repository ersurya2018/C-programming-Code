//
#include<stdio.h>
main()
{
	int i,j;
	int a[2][2]={2,3,4,5};
	int b[2][2]={1,1,1,1};
	int sum[2][2];
	/*
	printf("First array: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Second array: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}*/
	printf("sum of array array: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
	
}
