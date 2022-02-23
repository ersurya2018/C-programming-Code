#include <stdio.h>
#include <stdlib.h> // For exit()
int main(){
	void write();
   void copy();
   write();
   copy();
   
   
}
void write()
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
void copy()
{
	FILE *f1, *f2;
   char filename[100], c;
   f1 = fopen("emp.txt", "r");
   printf("Enter the filename to open for writing \n");
   scanf("%s", filename);
   f2 = fopen(filename, "w");
   c = fgetc(f1);
   while (c != EOF){
      fputc(c, f2);
      c = fgetc(f1);
   }
   printf("\nContents copied to %s", filename);
   fclose(f1);
   fclose(f2);
   
}
