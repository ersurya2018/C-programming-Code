//C program to find the length of a string without using the
//built-in function also check whether it is a palindrome
#include<stdio.h>
main()
{
	char str1[50],rstr[50];
	int len=0,i,f=0;
	printf("Enter the string : ");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		len++;
	}
	printf("%d\n",len);
	for(i=len-1;i>=0;i--)
	{
		rstr[len-i-1]=str1[i];	
	}
	rstr[len-i-1]='\0';
	printf("%s\n",rstr);
	for(i=0;str1[i]!=0;i++)
	{
		if(rstr[i]==str1[i])
		{
			f++;
			continue;
		}
		else
		{ 
		break;
		}
	}
	if(f!=0)
	{
		printf("this is palindrom");
	}
	else
	{
		printf("not palindron");
	}
	
}
