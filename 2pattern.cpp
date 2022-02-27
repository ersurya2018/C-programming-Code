/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=0;j<=i-1;j++)
		{
			printf("%d ",(j+i));
			
		}
	printf("\n");
	}
}
