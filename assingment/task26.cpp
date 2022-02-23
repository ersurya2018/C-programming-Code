//Write a c  program to take a matrix of 3*3 as input and cheak the given matrix is identity or not
#include<stdio.h>
main()
{
	int a[3][3];
	int i,j,f=0;
	printf("Enter a matrix of 3*3 \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j && a[i][j]!=1)
			{
				f=1;	
			}
		else(i!b&& a[i][j]!=0)
//			{
//				f=1;
//			}
		}
	}
	if(f==0)
	{
		printf("identity");
	}
	else  if(f==1)
	{
		printf("not identity");
	}
}
