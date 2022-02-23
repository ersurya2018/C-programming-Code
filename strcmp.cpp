//write a progam compare two string for equality.
#include<stdio.h>
#include<string.h>
main()
{
	char str1[50],str2[50];
	printf("Enter first string \n");
	gets(str1);
	printf("Enter second string \n");
	gets(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("both string are equal");
	}	
	else
	{
		printf("both string are not equal");
	}	
}
