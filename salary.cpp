#include<stdio.h>

struct Employee{
	char name[20];
	int salary;
}emp;

int main()
{
	printf("Enter Name of Employee:\n");
		scanf("%s", emp.name);
	printf("Enter Salary :\n");
	scanf("%d", &emp.salary);
	
printf("Enployee Name is :%s\n", emp.name);
printf("Employee Salary is :%d\n", emp.salary);



	return 0;
	}
