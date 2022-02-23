#include<stdio.h>
main()
{
	int a,l,b,p;
	printf("Enter the value of length and breath : \n");
	scanf("%d%d",&l,&b);
	a=l*b;
	printf("Area of l : %d and b : %d is %d \n",l,b,a);
	p=2*(l+b);
	printf("Perimeter of l : %d and b : %d is %d \n",l,b,p);
	
}
