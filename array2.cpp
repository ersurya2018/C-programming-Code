//WAP to find transpose of given matrix
#include<stdio.h>
main()
{
	int i,j,a[2][2];
	printf("Enter a matrix of 2*2");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("you have entered following matrixes:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("transpose of given matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
