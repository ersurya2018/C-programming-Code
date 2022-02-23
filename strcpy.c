//wap to copy one string to another string.

#include<stdio.h>
#include<string.h>
main()
{
	char str1[50],str2[50];
	printf("Enter source sring : ");
	gets(str1);
	strcpy(str2,str1);
	printf("source string=%s\n",str1);
	printf("target string=%s\n",str2);
//	puts(str2);
}
