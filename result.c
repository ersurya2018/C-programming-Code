#include<stdio.h>
#include<conio.h>
 void main()
{
int a,b,c,temp=0;
float per=0;
printf("enter the number of dccn\n,number of os\n, number of wt");
scanf("%d%d%d",&a,&b,&c);
temp=a+b+c;
per=(temp*100)/300;
printf("%f",per);
if(a>=80)
{
    printf(" student is honor\n");
}
else if(a<80&&a>=65)
{
    printf("student is first\n");
}
else if(a<65&&a>=33)
{
    printf("student is second\n");
}
else{
    printf("student is fail");
}
getch();
}
