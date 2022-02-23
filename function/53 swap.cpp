//WAP to swap two  numbers using call by value
#include<stdio.h>
main()
{
	void swap(int,int); // function declaration
	int a,b;
	printf("Enter two numbers : \n");
	scanf("%d%d",&a,&b);
	swap(a,b);	// calling function 
	printf("a=%d\nb=%d\n",a,b);
}
void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("a=%d\n",x);
	printf("b=%d\n",y);
}
