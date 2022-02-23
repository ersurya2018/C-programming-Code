#include<stdio.h>
#include<conio.h>
void main()
{
	int ajay,shyam,ram;
	printf("Enter the age of ajay ,shyam,ram : \n");
	scanf("%d%d%d",&ajay,&shyam,&ram);
	if(ram>shyam && ram>ajay)
	{
		printf("ram");
	}
	else
	if(ajay>shyam)
	{
		printf("ajay");
		
	}
	else
	{
		printf("shyam");
	}
	getch();
}
