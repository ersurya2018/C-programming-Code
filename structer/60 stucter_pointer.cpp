//WAP  to demonstracte concept of structure using 
//Structure variable as poiner
#include<stdio.h>
main()
{
	struct info
	{
		int id;
		char name[50];
		
	};
	struct info *i;
	printf("Enter id : ");
	scanf("%d",&i->id);
	fflush(stdin);
	printf("Enter your name : ");
	gets(i->name);
	printf("ID =%d\n",i->id);
	printf("Name=%s\n",i->name);
}
