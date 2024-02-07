#include<stdio.h>
#include<conio.h>

struct Student_Detail{
	int enroll;
	char name[30];
	int sem;
	double cpi;
};

//struct Student_Detail s[5];
void getData(int num,struct Student_Detail s[num]){
	int i;
	for(i=0;i<num;i++){
	printf("Enter Student Enroll_No:");
	scanf("%d",&s[i].enroll);
	printf("Enter Name Of Student:");
	scanf("%s",&s[i].name);
	printf("Enter Semester Of Student:");
	scanf("%d",&s[i].sem);
	printf("Enter CPI Of Student:\n");
	scanf("%lf",&s[i].cpi);
	}
}

void printData(int num,struct Student_Detail s[num]){
	int i;
	printf("\n________________Employee Details________________\n");
	printf("\nEmp_ID \t Emp_Name \t Emp_Designation \t Emp_Salary\n");
	for(i=0;i<num;i++){
		printf("%d\t %s\t\t %d\t %lf\t \n",s[i].enroll,s[i].name,s[i].sem,s[i].cpi);
	}
	
//	printf("%d \t %s \t %s \t %d \n",e2.emp_id,e2.name,e2.des,e2.salary);
}


void main(){
	//Number of Employees / Objects
	int num;
	printf("Enter no of Student:");
	scanf("%d",&num);
	struct Student_Detail s[num];
	getData(num,s);
	printData(num,s);
	
}
