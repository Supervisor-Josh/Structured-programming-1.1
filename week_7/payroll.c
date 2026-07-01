// A program to manage employee payroll infomation
/*
Name: Joshua Kioko
Reg No: BCS-03-0067/2026
Version 1
*/

#include <stdio.h>
#include <string.h>

struct employee {
	char id[5];
	char name[15];
	char department[15];
	float bsalary;
	float allowance;
	float gross_salary;
	
};

float calculateGrossSalary(struct employee e){
	return e.bsalary + e.allowance;
} 

int main(){
	
	int i;
	struct employee staff[3];
	for(i = 0; i < 3; i++) {
	printf("\nEnter details for employee %d\n", i + 1);	
	printf("Enter the employee's ID: ");
	scanf("%s", &staff[i].id);
	printf("Enter the employee's name: ");
	scanf("%s", &staff[i].name);
	printf("Enter the employee's department: ");
	scanf("%s", &staff[i].department);
	printf("Enter the employee's basic salary: ");
	scanf("%f", &staff[i].bsalary);
	printf("Enter the employee's allowance: ");
	scanf("%f", &staff[i].allowance);
	
	staff[i].gross_salary = calculateGrossSalary(staff[i]);
	}
		
			
	printf("\n\n------------------------------------------------------------\n");
	printf("\t\tEMPLOYEE PAYROLL REPORT\n");	
	printf("------------------------------------------------------------\n");
	printf("ID \t NAME \t DEPARTMENT \t GROSS SALARY (Ksh)\n");
	printf("............................................................\n");
	for(i = 0; i < 3; i++){
	printf("%s \t %s \t %s \t\t %.2f\n", staff[i].id, staff[i].name, staff[i].department, staff[i].gross_salary);
	}
	printf("............................................................\n");
	return 0;
}