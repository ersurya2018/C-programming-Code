/*
1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
*/
#include<stdio.h>
int main()
{
	int i,j,mul=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			mul=i*j;
			printf("%d ",mul);
		}
		printf("\n");
	}
}
