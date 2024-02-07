#include<stdio.h>
#include<conio.h>

struct Employee_Detail{
	int emp_id;
	char name[30];
	char des[30];
	int salary;
};


void getData(int num,struct Employee_Detail *e[num]){
	int i;
	for(i=0;i<num;i++){
	printf("Enter Employee ID:");
	scanf("%d",&e[i]->emp_id);
	printf("Enter Name Of Employee:");
	scanf("%s",&e[i]->name);
	printf("Enter Designation Of Employee:");
	scanf("%s",&e[i]->des);
	printf("Enter Salary Of Employee:\n");
	scanf("%d",&e[i]->salary);
	}
}

void printData(int num,struct Employee_Detail *e[num]){
	int i;
	printf("\n________________Employee Details________________\n");
	printf("\nEmp_ID \t Emp_Name \t Emp_Designation \t Emp_Salary\n");
	for(i=0;i<num;i++){
		printf("%d\t\t %s\t %s\t\t %d\t \n",e[i].emp_id,e[i].name,e[i].des,e[i].salary);
	}
	
//	printf("%d \t %s \t %s \t %d \n",e2.emp_id,e2.name,e2.des,e2.salary);
}


void main(){
	//Number of Employees / Objects
	int num;
	printf("Enter no of Employee:");
	scanf("%d",&num);
	struct Employee_Detail *e[num];
	getData(num);
	printData(num);
	
}
