/*Write a C program to print the table of given number in given format:-
2*1=2
2*2=4
*/
#include<stdio.h>
main()
{
	int a,b,i=1;
	printf("Enter a number : ");
	scanf("%d",&a);
	while(i<=10)
	{
	 //printf("%d",i);
	 b=i*a;
	 printf("%d*%d=%d\n",a,i,b);
	 i++;	
	}
}
