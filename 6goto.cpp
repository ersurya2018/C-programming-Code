/* go to statement */
#include<stdio.h>
int main()
{
int a,b,c;
char res;
pre:
printf("Enter the two number \n");
scanf("%d%d",&a,&b);
printf("%d \n",(a+b));
fflush(stdin);
printf("do you still want to continue [y/n]\n");
scanf("%c",&res);
if(res=='y'){
	goto pre;
}	
else
{
	printf("thank u");
}
}
