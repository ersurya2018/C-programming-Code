//WAP to create dynamic array store n numbers in array and disply a numbers.
#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n;
	int *p;
	printf("How many numbers you want to store ? ");
	scanf("%d",&n);
	p=(int *) calloc(n,sizeof(int));
	printf("Enter % number\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("you have entered following numbers : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",p[i]);
	}
}

