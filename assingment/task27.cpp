//Write a C program to count number of words in a sentence.
#include <stdio.h>
#include <string.h>
main()
{
    char s[200];
    int c= 0,i;
 
    printf("Enter the string:\n");
    gets(s);
    for (i=0;s[i]!='\0';i++)
    {
        if (s[i]== ' ' && s[i+1]!= ' ')
		{
		//printf("%c\n",s[i]);
			c=c+1;	
		}
                
    }
    printf("Number of words in given string are: %d\n", c+1);
}
