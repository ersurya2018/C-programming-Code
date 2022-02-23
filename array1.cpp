//WAP to store fove numbr=er inn array and display those numbers
#include<stdio.h>
main()
{
	int x[5],i;
	printf("ENter five number \n");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("You have entered following numbers \n");
	for(i=0;i<=5;i++)
	{
		printf("%d",x[i]);
	}
}


