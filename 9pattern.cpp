/*
1
2 2 2
3 3 3 3 3
4 4 4 4 4 4 4  
*/

#include<stdio.h>
int main()
{
	int i,j,end=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=end;j++)
		{
			printf("%d ",i);
		}
		end=end+2;
		printf("\n");
	}
}
