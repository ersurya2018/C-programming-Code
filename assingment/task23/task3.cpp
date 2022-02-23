// hi friends today tell about how to division two number without division operator
// Lets start
#include<stdio.h>	//This is header  file
main()   	//this is main function
{
	int a,b,res; 	// variable define
	printf("Enter first number ");
	scanf("%d",&a);
	printf("Enter second number ");
	scanf("%d",&b);
	while(a>=b)			// This is  loop statement
	{
		a=a-b;
		res++;
	}
	printf("Division is : %d\n",res);//\n Use for new line or  line change
	printf("Reminder is : %d\n",a);
}
