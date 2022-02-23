/*
WAP  to make tamperature convertor using user define function 
ctof()
ftoc()
*/
#include<stdio.h>
main()
{
	float ctof(float);
	float ftoc(float);
	float c,f,r;
	int ch;
	printf("Enter Your choice \n");
	printf("1-> C to F \n");
	printf("2-> F to C\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: 
			printf("Enter the value of  C : \n");
			scanf("%f",&c);
			r=ctof(c);
			printf("C : %f",r);
			break;
		case 2: 
		 	printf("Enter the value of  F : \n");
			scanf("%f",&f);
			r=ftoc(f);
			printf("F : %f",r);
			break;
		default:
			printf("Invalid choice \n");
	}
	
}
float ctof(float x)
{	
	return((x*9)/5)+32;
}
float ftoc(float y)
{
	return(((y-32)*5)/9);
}

