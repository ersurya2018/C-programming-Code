/*
Program to accept N integer number and store them in an array AR. The odd elements in the AR
are copied into OAR and other elements are copied into EAR. Display the elements of OAR and
EAR.
*/
#include<stdio.h>
main()
{
	int i,ar[10],oar[10],ear[10],r;
	printf("Enter ten number\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&ar[i]);		
	}
	for(i=0;i<10;i++)
	{
		r=ar[i];
		if(r%2==0)
		{
			ear[i]=ar[i];
			printf("EAR : %d\n",ear[i]);
		}
		else
		{
			oar[i]=ar[i];
		printf("OAR : %d\n",oar[i]);	
		}
		
	}
}
