//WAP to cheak given string is palindron or not
#include<stdio.h>
main()
{
	char str[50],rstr[50];
	int l=0,i,n=0,f=0;
	printf("Enter a string : ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		l++;	
	}
	for(i=l-1;i>=0;i--)
	{
		rstr[n]=str[i];
		n++;	
	}	
	rstr[n]='\0';
//	printf("main string =%s\n",str);
//	printf("reverse string =%s\n",rstr);
	for(i=0;i<l;i++)
	{
		if(str[i]==rstr[i])
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
		printf("String is palindrome\n");
	}
	else
	{
		printf("String is not palindrome\n");
	}

}
