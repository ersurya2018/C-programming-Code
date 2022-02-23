#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c=0;
     printf("enter any two numbers");
     scanf("%d%d",&a,&b);
     c=a+b;
     printf("%d+%d=%d",a,b,c);
     c=a-b;
     printf("\n%d-%d=%d",a,b,c);
     c=a*b;
     printf("\n%dx%d=%d",a,b,c);
     c=a/b;
     printf("\n%d/%d=%d",a,b,c);
     c=a%b;
     printf("\n%dmodulas%d=%d",a,b,c);
     getch();
}


