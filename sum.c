#include<stdio.h>
#include<conio.h>

void main()
{
	float cp,sp,temp;
	printf("Enter the cost price : ");
	scanf("%f",&cp);
	printf("Enter the selling price : ");
	scanf("%f",&sp);
	if(cp==sp)
	{
		printf("There is no loss /n");
	}
	else
		if(cp>sp)
		{
			temp=cp-sp;
			printf("loss of %f",temp);
		}
	else{
		temp=sp-cp;
		printf("profit of %f",temp);
	}
	getch();
}

