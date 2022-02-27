/*
a 
b b 
c c c
d d d d
e e e e e
*/
#include<stdio.h>
int main()
{
	char i,j;
	for(i='a';i<='e';i++)
	{
		for(j='a';j<=i;j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
}
