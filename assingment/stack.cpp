//Write a C program to perform stack operations PUSH, POP and TRAVERSE using structure.
#include<stdio.h>
main()
{
	int arr[5];
	int i;
	printf("Enter 5 number : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
}
