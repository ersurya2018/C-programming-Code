#include<stdio.h>
main()
{
	int a[3][3],i,j,f=0;
	printf("Enter a matrix 3*3");
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
				break;
			}
			if(i!=j && a[i][j]!=0)
			{
				f=1;
				break;
			}
		}
	}
	if(f==0)
	{
		printf("Matrix  is identity");
	}
	else
	{
		printf("matrix not identity");
	}
}
