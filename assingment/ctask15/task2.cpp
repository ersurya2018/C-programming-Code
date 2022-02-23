/*Write a C program to accept a coordinate point in a XY coordinate system and determine its
quadrant.*/

#include<stdio.h>
main()
{
	int x,y;
	printf("Enter the value of X and Y coordinate :\n");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0)
	{
		printf("(%d,%d) First coordinate",x,y);
	}
	else if(x>0 && y<0)
	{
		printf("(%d,%d) Second coordinate",x,y);
	}
	else if(x<0 && y<0)
	{
		printf("(%d,%d) Third coordinate",x,y);
	}
	else
	{
		printf("(%d,%d) Fourth coordinate",x,y);
	}
}
