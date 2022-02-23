#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d\nb=%d\nc=%d",a,b,c);
    a=a+b;
    b=a-b;
    a=a-b;
    b=b+c;
    c=b-c;
    b=b-c;
    printf("\nswap value\na=%d\nb=%d\nc=%d",a,b,c);
    getch();
}
