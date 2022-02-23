//Write a C program to reverse the digits of given number.
#include<stdio.h>
#include<math.h>
main()
{
	int a,r,s=0;
	printf("Enter number : ");
	scanf("%d",&a);
	printf("reverse %d",s);
	while(a>0)
	{
		r=a%10;
		s=s*10+r;
		printf("%d \n",s);
		a=a/10;
		
	}
	
}
