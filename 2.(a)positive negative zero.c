#include<stdio.h>
#include<conio.h>
void main()
{

    int a,i;
    
    for(i=1;i<=3;i++)
    {
    	printf("enter a number\n");
   		scanf("%d",&a);
	
	    if(a>0)
	    {
	        printf("%d is a positive number\n\n",a);
	
	    }
	    else if(a<0)
	    {
	        printf("%d is a negative number\n\n",a);
	    }
	    else
	    {
	        printf("this number is zero\n\n");
	    }
	}
    getch();
}
