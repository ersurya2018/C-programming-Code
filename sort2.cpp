#include<stdio.h>
main()
{
	int i,temp=0,a[4]={10,9,8,7};
	/*for(i=0;i<4;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}*/
	for(i=0;i<4;i++)
	{
		printf("%d\t",a[i]);
	}
}
