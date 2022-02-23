#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f=1;
    printf("enter the jhatt\n");
    scanf("%d",&n);
    while(n>1)
    {
        f=f*n;
        n--;
    }
    printf("%d",f);
    getch();
}
