//salary Calculation
#include<stdio.h>
main()
{
	float bs,hra,da,gs;
	printf("Enter basic sallary : \n");
	scanf("%f",&bs);
	if(bs<=4000)
	{
		hra=bs*10/100;
		da=bs*50/100;
	}
	else if(bs>4000 && bs<=8000)
	{
		hra=bs*20/100;
		da=bs*60/100;
	}
	else if(bs>8000 && bs<=12000)
	{
		hra=bs*25/100;
		da=bs*70/100;
	}
	else
	{
		
		hra=bs*30/100;
		da=bs*80/100;	
	}
	gs=bs+hra+da;
	printf("Basic Saalary=%.2f\n",bs);
	printf("House Rent Allownces=%.2f\n",hra);
	printf("Dearness allownces=%.2f\n",da);
	printf("gross salary=%.2f",gs);
}
