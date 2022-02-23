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
void xstrcpy(char *str2,char *str3)
{
	int i=0;
	for(i=0;str3[i]!='\0';i++)
	{
		str2[i]=str3[i];
	}
	str2[i]='\0';
}
