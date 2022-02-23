#include<stdio.h>
#include<conio.h>
void main() 
{
	int a[10],i,sum=0;
	float avg;
	
	printf("Enter the 10 number :");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<=9;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum: %d \n",sum);
	avg=sum/10.0;
	printf("Avg is :%f",avg);
	getch();
}
