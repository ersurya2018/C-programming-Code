#include<stdio.h>
main()
{
	int i,temp,n=4,j;
	int arr[4]={100,99,10,2};
 	for(j=1;j<4;j++)
	{
	
		for(i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			}
		}
	}
	
	for(i=0;i<=3;i++)
	{
		printf("%d\t",arr[i]);
	}
	
}
