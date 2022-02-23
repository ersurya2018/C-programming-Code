//USE of array of structure variable
//  WAP to demonstrate array of structure variables.
#include<stdio.h>
main()
{
	struct employee 
	{
		int empid;
		char empname[50];
		long int salary;
	};
	struct employee emp[3];//Array of struct variable.
	int i;
	printf("********Enter Employee  Details*********\n");
	for(i=0;i<3;i++)
	{
		printf("**Enter Details of Empolyee %d**\n",(i+1));
		printf("Enter Employee Id : \n");
		scanf("%d",&emp[i].empid);
		fflush(stdin);
		printf("Enter Employee Name : \n");
		gets(emp[i].empname);
		printf("Enter employee salary \n");
		scanf("%ld",&emp[i].salary);
	}
	
	printf("****Details Employees*** \n");
	for(i=0;i<3;i++)
	{
		printf("**Details of Empolyee %d**\n",(i+1));
		printf("Employee Id : %d\n",emp[i].empid);
//		scanf("%d"&emp[i].empid);
//		fflush(stdin);
		printf("Employee Name : %s\n",emp[i].empname);
//		gets(emp[i].empname);
		printf("Employee salary : %ld\n",emp[i].salary);
//		scanf("%ld",&emp[i].salary);
	}
	
}
