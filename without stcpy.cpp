//WAP to capy one one string to another string without using strcpy() function
#include<stdio.h>
main()
{
	char str1[50],str2[50];
	int i;
	printf("Enter the source string : ");
	
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("Source string=%s",str1);
	printf("target string=%s",str2);
	
}
