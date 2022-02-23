
#include<stdio.h>
int res = 1;
main()
{
	int re(int,int);
	int a,b,result=0;
	printf("Enter first number ");
	scanf("%d",&a);
	printf("Enter second number ");
	scanf("%d",&b);
	printf("%d\n",re(a,b));		
}
int re(int x,int y) {
	if(y>=1)
	{
		res=res*x;
		re(x,y-1);
	}
}
