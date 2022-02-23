#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,sum;
	printf("Enter the three angle of traingle : \n");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	if(sum==180)
	{
		printf("This is valid traingle ");
	}
	else
	{
		printf("This is not valid traingle ");
	}
	getch();
	
}
