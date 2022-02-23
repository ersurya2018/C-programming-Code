//WAP to performe write operation into the file.
#include<stdio.h>
main()
{
	int empid;
	char empname[50];
	long int salary;
	FILE *p;
	printf("Enter Employee Id : ");
	scanf("%d",&empid);
	fflush(stdin);
	printf("Enter Employee name : ");
	gets(empname);
	printf("Enter Empolyee Sallary : ");
	scanf("%ld",&salary);
	p=fopen("emp.txt","a");
	fprintf(p,"Employee Id=%d\n",empid);
	fprintf(p,"Employee Name=%s\n",empname);
	fprintf(p,"Employee Salary=%ld\n",salary);
	fclose(p);
}
