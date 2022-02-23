//Write a C Program to create a user defined function xstrcmp() to compare two strings for
//equality.
#include<stdio.h>

main()
{
	void xstrcmp(char *,char *);
	char str[50],str1[50];
	int a;
	printf("Enter first string : \n");
	gets(str);
	printf("Enter second string :\n");
	gets(str1);
	xstrcmp(str,str1);
}
void xstrcmp(char *str2,char *str3)
{
	int i,l1=0,l2=0,f=0;
	for(i=0;str2[i]!='\0';i++)
	{
		l1++;
	}
	for(i=0;str3[i]!='\0';i++)
	{
		l2++;
	}
	if(l1!=l2)
	{
		printf("not compair able ");	
	}
	else
	{
		for(i=0;l1<=l2;l1++)
		{
			if(str2[i]==str3[i])
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
			printf("This is same string");
		}
		else
		{
			printf("This is not same");
		}
	}
}
