//WAP to demonstrate concept of structure
#include<stdio.h>
main()
{
	struct empolyee
	{
		int empid;
		char empname[50];
		long int salary;	
	};
	//struct variable
	struct empolyee emp;//Structure variable
	printf("Enter empolyee Id : ");
	scanf("%d",&emp.empid);//fist  variable name fir member name
	fflush(stdin);
	printf("Enter empolyee name : ");
	gets(emp.empname);
	printf("Enter employee salary : ");
	scanf("%ld",&emp.salary);
	printf("\n Details of employee \n");
	printf("Employee Id=%d\n",emp.empid);
	printf("Employee name=%s\n",emp.empname);
	printf("Employee salary=%ld\n",emp.salary);
}
