//WAP to findvolume of cuboid using function 
#include<stdio.h>
main()
{
	int volume(int,int,int);//Declaration of function 
	int l,b,h,v;
	printf("Enter the value of length,breadth,height\n");
	scanf("%d%d%d",&l,&b,&h);
	v=volume(l,b,h);// there is calling of function.
	printf("volume of cuboid is=%d",v);
}
int volume(int x,int y,int z) //  definition of function 
{
	return(x*y*z);
}
