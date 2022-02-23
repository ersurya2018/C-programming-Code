//Write a C program to search a number in list of 10 numbers (use linear search).
#include<stdio.h>
main()
{
	int i,a,b,l[10]={10,20,30,40,50,60,70,80,90,100};
	int f=0;
	printf("Enter a number \n");
	scanf("%d",&a);
	for(i=0;i<10;i++)
	{
		
		b=l[i];
		//printf("%d",b);
		
		if(b==a)
		{
			f=1;
			break;
		}
			
	}
	if(f==1)
	{
		printf("found");	
	}
	else
	{
		printf("not found");
	}

	
}
