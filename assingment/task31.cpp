//WAP to copy contant of one file into another file.
#include<stdio.h>
main()
{
	int srno;
	FILE *p;
	char proname[50];
	long int price;
	printf("Enter SR.NO : ");
	scanf("%d",&srno);
	fflush(stdin);
	printf("Enter product name : ");
	gets(proname);
	printf("Enter product price : ");
	scanf("%ld",&price);
	p=fopen("pro.txt","w");
	fprintf(p,"SR no. is : %d\n",srno);
	fprintf(p,"Product name is : %s\n",proname);
	fprintf(p,"product price : %ld\n",price );
	fclose(p);
	
}

