/*
Write a C program to display the inventory of items in a store/shop the inventory maintains
details such as name, price and quantity of each item.
*/
#include<stdio.h>
main()
{
	struct shop
	{
		char name[50];
		long int p;
		int q;
	};
	struct shop s[5];
	int i;
	printf("********Enter Items  Details*********\n");
	for(i=0;i<5;i++)
	{
		printf("**Enter Details Item %d**\n",(i+1));
		fflush(stdin);
		printf("Enter Items Name : \n");
		gets(s[i].name);
		printf("Enter Item Price : \n");
		scanf("%ld",&s[i].p);
		printf("Enter Items quantity \n");
		scanf("%d",&s[i].q);
	}
	printf("\n");
	printf("************************Details Items*** \n");
	
	for(i=0;i<5;i++)
	{
		printf("**Details Item %d**\n",(i+1));
		printf("Items Name : %s\t",s[i].name);
		printf("Item Price : %ld\t",s[i].p);
		printf("Items quantity :%d\t",s[i].q);
		printf("\n");
	}
	
}
