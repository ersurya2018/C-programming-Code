#include<stdio.h>
main()
{
	int a;
	printf("Enter your Marks\n");
	scanf("%d",&a);
	if(a<34)
	{
		printf("Fail");
	}
	else if(a>33 && a<51)
	{
	printf("Pen");	
	}
	else if(a>51 && a<76)
	{
	printf("Diary");	
	}
	else if(a>76 && a<86)
	{
	printf("Tablate");	
	}
	else if(a>86 && a<101)
	{
	printf("Leptop");	
	}
}
