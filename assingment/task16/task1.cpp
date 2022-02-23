//Write a C program to take day number as input and display day name using switch.
#include<stdio.h>
main()
{
	int a;
	printf("Enter your choice number \n");
	printf("1 to 7 number for Sunday to Saturday \n");
	printf("like as 1 for Sunday \n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thusday");
			break;
		case 6:
			printf("Friday");
		case 7:
			printf("Saturday");
			break;
		default:
			printf("pagal ho kya Instruction sahi se pado");
			break;
		
	}
	
}
