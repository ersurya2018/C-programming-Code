/*
Write a C program to print following pattern:-
A
B B
C C C
D D D D
E E E E E
F F F F
G G G
H H
I
*/

#include<stdio.h>
main()
{
	int i,j;
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	for(i=70;i<=73;i++)
	{
		for(j=i;j<=73;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	
	
}
