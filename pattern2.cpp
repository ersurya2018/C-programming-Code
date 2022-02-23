/*
A
BB
CCC
DDDD
EEEEE
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
}

//main()
//{
//	int i,j,c;
//	for(i=1;i<=5;i++)
//	{
//		for(j=65;j<=i+64;j++)
//		{
//			c=64+i;
//			printf("%c",c);
//		}
//		printf("\n");
//	}
//}
