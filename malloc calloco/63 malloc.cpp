//WAP to demonstrate concept of malloc()
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p;
	p=(int *) malloc(sizeof(int));
	printf("Enter a number : ");
	scanf("%d",p);
	printf("The value %d\n",*p);
}
