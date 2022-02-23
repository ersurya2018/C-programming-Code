//Write a C program to find roots of quadratic equation ax2+bx+c=0
#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,x,res,res1,res2;
	printf("Enter the value of a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	res1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	res2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	printf("(%.2f,%.2f)",res1,res2);
	
}
