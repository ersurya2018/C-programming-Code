/*
WAP to  find the valume and surface area of cuboid 

*/
#include<stdio.h>
main()
{
	int l,b,h,va,sa;
	printf("Enter the value of l,b,h \n");
	scanf("%d%d%d",&l,&b,&h);
	va=l*b*h;
	sa=2*(l*b+b*h+h*l);
	printf("Valume is : %d \n",va);
	printf("Sarface Area is : %d \n",sa);
}
