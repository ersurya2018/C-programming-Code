#include<stdio.h>
#include<conio.h>
void main()
{


     float c,f;
      int ch;
      printf("enter 1 for c to f\n");
     printf("enter 2 for f to c\n");
     scanf("%d",&ch);
     switch(ch)
     {

 case 1:
    {
        printf("enter temperature in c");
        scanf("%f",&c);
        f=(9*c)/5+32;
        printf("temperature in f=%.2f\n",f);
        break;

    }
 case 2:
    {
        printf("enter the temperature in f");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("temperature in c=%.2f\n",c);
        break;
        }
        deafault:
            {

                printf("invalid choice");
                break;
            }
     }
     getch();
}
