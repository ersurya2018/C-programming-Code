#include<stdio.h>
#include<conio.h>
void main()
{
    int  l,b,h,r;
    float volume;
    printf("enter the radius of sphere");
    scanf("%d",&r);
    volume=(4/3)*(3.14*r*r*r);
    printf("the volume of sphere is %f\nnow ! enter the length,breath and height of pyramid",volume);
    scanf("%d%d%d",&l,&b,&h);
    volume=(l*b*h)/3;
    printf("the volume of pyramid is %f",volume);
    getch();
}
