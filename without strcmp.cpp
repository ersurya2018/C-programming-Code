//WAP to comparre two string for equality without using built in function
#include<stdio.h>
main()
{
	char str1[50],str2[50];
	int i,l1=0,l2=0,f=0;
	printf("Enter first string :");
	gets(str1);
	printf("Enter second string : ");
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		l1++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		l2++;
	}
	if(l1!=l2)
	{
		printf("Those string are not comparable\n");
	}
	else
	{
		for(i=0;i<l1;i++)
		{
			if(str1[i]==str2[i])
			{
				continue;
			}
			else
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			printf("Both string sre equle\n");
		}
		else
		{
			printf("both string are not equle\n");
		}
	}
	
}

