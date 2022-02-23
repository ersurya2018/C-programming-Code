//WAP to make user defined  function xstrlen() to find the length of string
#include<stdio.h>
main()
{
	int xstrlen(char *);
	char str[50];
	int l;
	printf("Enter a string \n");
	gets(str);
	l=xstrlen(str);
	printf("Length of string = %d\n",l);
}
int xstrlen( char *s)
{
	int n=0;
	while(*s!='\0')
	{
		n++;
		s++;
	}
	return (n);
}
