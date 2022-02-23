//WAP to find greatest number in two unequal numbers
#include<stdio.h>
main()
{
	int x,y;
	printf("Enter the two unequal variabl : ");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
		printf("%d is greater ",x);
	}
	else
	if(x<y)
	{
		printf("%d is greater ",y);
	}
	else
	{
		printf("%d is equal");
		
	}
}
