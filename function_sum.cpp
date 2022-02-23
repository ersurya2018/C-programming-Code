//WAP to find sum of two numbers using function

#include<stdio.h>
main()
{
int a,b,c;
int add(int,int);//Declaration of function
printf("Enter two number");
scanf("%d%d",&a,&b);
printf("Sum=%d\n",c);
c=add(a,b);	// Calling of function

}
int add(int x,int y)//definition of function
{
return(x+y);
}
