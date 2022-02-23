//WAP to copy contant of one file into another file.
#include<stdio.h>
main()
{
	char c;
	FILE *p;
	FILE *p1;
	p=fopen("pro.txt","r");
	p1=fopen("pro1.txt","w");
	c=fgetc(p);
	while(c!=EOF) //EOF anam
	{
		
		fputc(c,p1);
		//printf("%c",p1);
		c=fgetc(p);
	}
	 printf("\nContents copied to");
	fclose(p);
	fclose(p1);
}
