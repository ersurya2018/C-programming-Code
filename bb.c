#include<stdio.h>
#include<stdlib.h>
main()
{
  int ch;
  printf("1-> Notepad \n");
  printf("2-> Calculator \n");
  printf("3-> Shutdown \n");
  scanf("%d",&ch);
  switch(ch)
  {
  	case 1:
  		system("C:\\Windows\\System32\\notepad");
  		break;
  	case 2:
  		system("C:\\Windows\\System32\\calc");
  		break;
  	case 3:
  		system("C:\\Windows\\System32\\shutdown /s");
  		break;
  	default:
  		printf("invalid choice");
  		break;
	}
}
