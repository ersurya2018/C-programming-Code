//Write a c  program to take a matrix of 3*3 as input and print the diagonal element of matrix
#include<stdio.h>
main()
{
	int a[3][3];
	int i,j,n=3;
	printf("Enter a matrix of 3*3 \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("diagonal element of matrix :\n")
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);
			}
		}
	}
printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j==n-1)
			{
				printf("%d ",a[i][j]);
			}
		}
	}	
	
	
}
