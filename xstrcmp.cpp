//WAP to compare  two strings for equlity using user defined named xsrtcmp()
#include<stdio.h>
main()
{
	int xstrcmp(char *,char *);
	char str1[50],str2[50];
	int res;
	printf("Enter first stirng : ");
	gets(str1);
	printf("Enter second string :");
	gets(str2);
	res=xstrcmp(str1,str2);
	if(res==0)
	{
		printf("Both string are equal\n");
	}
	else
	{
		printf("Both String are not equal\n ");
	}
}
int xstrcmp(char * s1,char * s2)
{
	int f=0;
	while(*s1!='\0')
	{
		if(*s1==*s2)
		{
			s1++;
			s2++;
			continue;
		}
		else
		{
			f=1;
			break;
		}
	}
	return f;
	
}
