// WAP to concatenate ane string to another string. 
#include<stdio.h>
#include<string.h>
main()
{
	char str1[50],str2[50];
	printf("Enter the first string : ");
	gets(str1);
	printf("Enter the second string : ");
	gets(str2);
	strcat(str1,str2);
	printf("Final string is=%s\n",str1);
} 
