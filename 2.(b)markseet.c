void main()
{

    int dc,wt,os;
    float per,tt;
    printf("your maximum number is 100\n enter the obtianed marks of:-\n Data structure and data communication\n operating system\n Web technology 2nd\n");
    scanf("%d%d%d",&dc,&os,&wt);
    tt=dc+wt+os;
    printf("your total number is %f",tt);
    per=(tt/300)*100;
    printf("\nyour percent=%f\n",per);
    if(per>=80)
     {

       printf("\ncongratulation ! you got honor\n");
     }
    else if(per<=80&&per>=65)
       {
       	

       printf("you got first division\n");
       }
    else if(per<=65&&per>=33);
    {printf("you got second divison\n");
    }
    if(per<=33)
      {

      printf("sorry ! this year you had failed");
      }
    getch();
}
