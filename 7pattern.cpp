/* 
2 2
3 3 3 
4 4 4 4
5 5 5 5 5
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i+1;j++)
		{
			printf("%d ",i+1);
		}
		printf("\n");
	}
}
