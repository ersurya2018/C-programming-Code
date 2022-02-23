//WAP to cheack given string is palindrome or not
#include<stdio.h>
#include<string.h>
main()
{
	char str[50],rstr[50];
	printf("Enter a string : ");
	gets(str);
	strcpy(rstr,str);
	strrev(rstr);
	if(strcmp(str,rstr)==0)
	{
		printf("string is palindrome ");
	}
	else
	{
		printf("String is not palindrome");
	}
}
