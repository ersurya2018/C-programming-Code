//Write a code check given two matrices are equel or not 
#include<stdio.h>
main()
{
	int a[3][3],b[3][3],i,j,f=0;
	printf("Enter matrix of A of 3*3\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ 
		scanf("%d",&a[i][j]);
		}
	}
	printf("Enter matrix of B of 3*3\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ 
		scanf("%d",&b[i][j]);
		}
	}/*
	printf("Enter matrix of A of 3*3");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ 
		scanf("%d",&a[i][j]);
		}
	}*/
	//printf("Enter matrix of A of 3*3");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ 
		if(a[i][j]==b[i][j])
		{
		continue;	
		}
		else
		{
			f=1;
			break;
		}
		}
	}
	if(f==0)
	{
		printf("matrix matched");
	}
	else if(f==1)
	{
		printf("matrix not matched");
	}
}
