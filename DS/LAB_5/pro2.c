#include<stdio.h>
struct student{
	int enrollmentNo;
	char name[100];
	int sem;
	float CPI;
};

void main(){
	int size,i;
	printf("How many student do you have : ");
	scanf("%d",&size);
	struct student s[size];
	
	for(i=0;i<size;i++){
		printf("Enter Enrollment Number : ");
		scanf("%d",&s[i].enrollmentNo);
		printf("Enter Student Name : ");
		scanf("%s",s[i].name);
		printf("Enter semenster : ");
		scanf("%d",&s[i].sem);
		printf("Enter CPI : ");
		scanf("%f",&s[i].CPI);
	}
	
	for(i=0;i<size;i++){
		printf("Enter Employee Id : %d\n",s[i].enrollmentNo);
	
		printf("Enter Employee Name : %s\n",s[i].name);
		
		printf("Enter Employee Designation : %d\n",s[i].sem);
		
		printf("Enter Employee Salary : %f\n",s[i].CPI);
	}
}
