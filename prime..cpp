//WAP to cheak given number is prime or not

#include<stdio.h>
main()
{
	int n,i,c=0;
	printf("Enter the number to chek number prime or not = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d is prime\n",n);
	}
	else
	{
		printf("%d id not prime\n",n);
	}
}
