//WAP to perform to read operation in file.
#include<stdio.h>
main()
{
	char c;
	FILE *p;
	p=fopen("emp.txt","r");
	c=fgetc(p);
	while(c!=EOF) //EOF anam
	{
		printf("%c",c);
		c=fgetc(p);
	}
	fclose(p);
}
