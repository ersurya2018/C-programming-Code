//WAP to print matrix of (2*2) by user input
#include<stdio.h>
main()
{
	int a[3][3],i,j;
	printf("Enter the four value for matrix (2*2) :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("matrix printf who following entered value\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
