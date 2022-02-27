#include<stdio.h>

int main()
{
 	float a,b,c,res;
    printf("Enter the 3 subject marks ");
    scanf("%f%f%f",&a,&b,&c);
    if(a >=33.0 && b>=33.0 && c>=33.0)
    {
        res= (a+b+c)*100/300;
        if (res > 40)
        {
		printf ("your result is %f Percent and you are pass",res);
		}
		else{
			printf("you are fail beause your persent is %f who less the 40",res);
		}
    }
    else
    printf("You are fail because always each subject marks is grater then  or equl 33");
    return 0;
}

