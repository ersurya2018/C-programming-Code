/*Write a C program to convert temperature from 0
C to 0
F and 0
F to 0
C based on user choice. In

this program use the concept of switch.
*/
#include<stdio.h>
main()
{
	int a;
	float c,f,res;
	printf("Enter your choice : \n");
	printf("1 for C to F\n2 for F to C\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Enter the value of c \n");
			scanf("%f",&c);
			res=((9*c)/5)-32;
			printf("%f",res);
		break;
		case 2:
			printf("Enter the value of f\n");
			scanf("%f",&f);
			res=((f-32)*5)/9;
			printf("%f",res);
		default:
			printf("Wrong Choice");
	}
}
