//Write a C program to create a structure named student. In student structure take rollno, name
//and fee as data members. Now store and display student details.
#include<stdio.h>
main()
{
	struct student
	{
		int rollno;
		char name[100];
		long int fee;	
	};
	struct student stu;
	printf("Enter student's rollno : ");
	scanf("%d",&stu.rollno);
	fflush(stdin);
	printf("Enter student's Name : ");
	gets(stu.name);
	printf("Enter Student's fee : ");
	scanf("%ld",&stu.fee);
	printf("\n");
	printf("******Student details is****** \n");
	printf("Studen rollno is : %d\n",stu.rollno);
	printf("Student's name is : %s\n",stu.name);
	printf("Student's Fee is : %ld\n",stu.fee);
	
}
