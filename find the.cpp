//WAP to count occurance of The word in a sentence.
#include<stdio.h>
#include<string.h>
main()

	char sen[100];
	int l,c=0,t,h,e,s,i;
	printf("Enter a sentence \n");
	gets(sen);
	l=strlen(sen);
	/* Finding the frequency of  word 'the'*/
	for(i=0;i<=l-3;i++)
	{
		t=(sen[i]=='t' || sen[i]=='T');
		h=(sen[i+1]=='h' || sen[i+1]=='H');
		e=(sen[i+2]=='e' || sen[i+2]=='E');
		s=(sen[i+3]==' ' || sen[i+3]=='\0');
		if(t&&h&&e&&s==1)
		{
			c++;
		}
	}
	printf("Occrance of the word =%d\n",c);
	
}
