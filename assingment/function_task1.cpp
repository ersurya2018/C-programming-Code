//Write a C program to find volume and surface area of cuboid using user defined function.
#include<stdio.h>
main()
{
	int l,b,h,a,v;
	int area(int,int,int);//function declaration
	int volume(int,int,int);//function declaration
	printf("Enter the value of l,b,h\n");
	scanf("%d%d%d",&l,&b,&h);
	a=area(l,b,h);// function calling
	v=volume(l,b,h);//calling function
	printf("area of cuboid= %d\n",a);
	printf("area of valume= %d\n",v);
		
}
int area(int x,int y,int z)//function definition
{
	return(x*y*z);
}
int volume(int x,int y, int z)//function definition
{
	return(2*(x*y+y*z+z*x));
}
