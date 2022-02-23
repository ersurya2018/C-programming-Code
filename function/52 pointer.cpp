//WAP to demonstrate  concept of poinnter
#include<stdio.h>
main()
{
	int x=100;
	int *p;
	p=&x;
	printf("Value using variable : %d\n",x);
	printf("Value using pointer : %d\n",*p);
	*p=200;
	printf("changed value %d\n",x);
	
	
}
