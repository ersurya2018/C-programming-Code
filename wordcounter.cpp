//word counter
#include<stdio.h>
main()
{
	char sen[100];
	int wc=0,i;
	printf("Enter a sentance : ");
	gets(sen);
	for(i=0;sen[i]!='\0';i++)
	{
		if(sen[i]==' ')
		{
			wc++;
		}
	}
	printf("No of words =%d\n",(wc+1));
}
