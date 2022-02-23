//WAP  to take a matrix as input and display it
#include<stdio.h>
main()
{
	int a[3][3],i,j;
	printf("Enter a matrix of 3*3 \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("you have entered following matrixes \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
