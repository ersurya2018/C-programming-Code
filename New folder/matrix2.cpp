//WAP to add two matrix by userinput 
#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Enter the 9 number for first matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the 9 number for second matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum of two matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
