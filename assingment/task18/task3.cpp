//Write a C program to check given number is Armstrong or not.
#include<stdio.h>
#include<math.h>
main()
{
	int a,r,temp,res=0;
	printf("Enter 3 digit number : \n");
	scanf("%d",&a);
	temp=a;
	while(a>0)
	{
		r=a%10;
		res=res+pow(r,3);
		a=a/10;	
	}
	if(res==temp)
	{
		printf("%d==%d so is Armstrong\n",res,temp);
	}
	else
	{
		printf("%d!=%d so is not Armstrong\n",res,temp);	
	}
}
