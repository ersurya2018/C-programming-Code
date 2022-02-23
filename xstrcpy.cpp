//WAP to copy one string to another string using user defined function xstrcpy()
//Write a C program to create a user defined function xstrcpy() to copy one string to another.
#include<stdio.h>
main()
{
	void xstrcpy(char *,char*);
	char str[50],str1[50];
	printf("Enter the string \n");
	gets(str);
	xstrcpy(str1,str);
	printf("copy string =%s",str1);
}
void xstrcpy(char *t,char *s)
{
	while(*s!='\0')
	{
		*t=*s;
		s++;
		t++;
	}
	*t='\0';
}
