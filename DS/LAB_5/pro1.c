#include<stdio.h>
struct Emp{
	int empId;
	char name[100];
	char des[100];
	long int salary;
};

void main(){
	struct Emp e1;
	
	printf("Enter Employee Id : ");
	scanf("%d",&e1.empId);
	printf("Enter Employee Name : ");
	scanf("%s",e1.name);
	printf("Enter Employee Designation : ");
	scanf("%s",e1.des);
	printf("Enter Employee Salary : ");
	scanf("%ld",&e1.salary);
	
	printf("Enter Employee Id : %d\n",e1.empId);
	
	printf("Enter Employee Name : %s\n",e1.name);
	
	printf("Enter Employee Designation : %s\n",e1.des);
	
	printf("Enter Employee Salary : %ld\n",e1.salary);

}
