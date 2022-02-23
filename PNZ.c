#include<stdio.h>
#include<conio.h>
void main()
{

    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is a positive number",a);

    }
    else if(a<0)
    {
        printf("%d is a negative number",a);
    }
    else
    {
        printf("this number is zero");


    }
    getch();
}
