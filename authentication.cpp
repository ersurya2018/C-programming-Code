//authentication program
#include<stdio.h>
#include<conio.h>
main()
{
	char username[20],password[10];
	char ch;
	int i;
	printf("Enter User name : ");
	gets(username);
	printf("Enter your password ");
	for(i=0;i<10;i++)
	{
		ch=getch();
		if(ch==13 || ch==8 || ch==32)
		{
			break;
		}
		password[i]=ch;
		ch='*';
		printf("%c",ch);
	}
	password[i]='\0';
	printf("\nUsername=%s\n",username);
	printf("\nPassword=%s\n",password);
}

