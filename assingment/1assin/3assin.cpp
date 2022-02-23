#include<stdio.h>
main()
{
	int a,d,y,w,rem;
	printf("Enter the days : \n");
	scanf("%d",&a);
	y=a/365;
	printf("year is : %d\n",y);
	rem=a%365;
	w=rem/7;
	printf("week  is : %d\n",w);
	d=rem%7;
	printf("day is : %d\n",d);	
}
