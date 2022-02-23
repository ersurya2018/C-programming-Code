// WAP to swap two number using call by reference
#include<stdio.h>
main()
{
	void swap(int *,int *);//function declaration
	int a,b;
	printf("Enter two number \n");
	scanf("%d%d",&a,&b);
	swap(&a,&b); // function calling
	printf("a=%d\nb=%d\n",a,b);
}
void  swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
