//Wap to  find length of string without using strlen()
#include<stdio.h>
main()
{
	char str[50];
	int l=0,i;
	printf("Enter a string : ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("String of length is : %d",l);
}
