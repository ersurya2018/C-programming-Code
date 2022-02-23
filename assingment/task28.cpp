//Write a C program to check given string is palindrome or not. Hint:- Use strrev() function to
//reverse string and strcmp() function to compare string.
#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100],c;
	printf("Enter the string ");
	gets(a);					//This function is used for input by user a string
	strcpy(b,a);		// for string copy
	printf("without reverse\n");
	puts(b);			// printing message
	strrev(a);			//for reverse a string 	
	printf("with reverse\n");
	puts(a);
	c=strcmp(a,b);		// for copy a string
	if(c==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("palindrome not");
	}
}
