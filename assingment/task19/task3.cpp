//Write a C program to check given number is even or odd by using conditional operator.
#include<stdio.h>
main()
{
	int a;
	printf("Enter the number \n");
	scanf("%d",&a);
	(a%2==0)?(printf("%d even number",a)):(printf("%d odd number",a));
}
