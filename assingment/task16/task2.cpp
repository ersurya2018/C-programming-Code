//Write a C program to make simple calculator using switch.
#include<stdio.h>
main()
{
	int a,b,c,ch;
	printf("Enter your choice number : \n");
	printf("1: Addication \n");
	printf("2: subtraction\n");
	printf("3: Multiply\n");
	printf("4: division\n");
	printf("5: modulas\n");
	scanf("%d",&ch);
	if(ch<=5)
	{
		printf("Enter the two number\n");
		scanf("%d%d",&a,&b);
		switch(ch)
		{
			case 1:
				printf("Add number is : %d",(a+b));
				break;
			case 2:
				printf("sub number is : %d",(a-b));
				break;
			case 3:
				printf("multiply number is : %d",(a*b));
				break;
			case 4:
				printf("division number is : %d",(a/b));
				break;
			case 5:
				printf("Modulas number is : %d",(a%b));
				break;
		}
	}
	else{
	printf("pagal ho kya Instruction sahi se pado");	
	}
	
	}
	
	

