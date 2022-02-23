#include<string.h>
void main()
{
char str1[50],str2[50];
printf("Enter the first string:");
gets(str1);
printf("Enter second string:");
gets(str2);
if(strcmp(str1,str2)==0)
{
printf("both string are equal");
}
else
{
printf("both string are not equal");
}
getch();
}
