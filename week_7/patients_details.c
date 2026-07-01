// progam to store patients data
/*
Name: Joshua kioko
Reg No: BCS-03-0067/2026
Version 1
*/

#include <stdio.h>
#include <string.h>

struct patient {
    int patients_id;
	char patients_name[20];
	int age;
	char gender[7];
	char diagnosis[30];
	int days_admitted;		
};

int main(){
	struct patient patient1, patient2, patient3;
	printf("Enter the patient's ID No: ");
	scanf("%d", &patient1.patients_id);
	printf("Enter the patient's name: ");
	scanf("%s", &patient1.patients_name);
	printf("Enter the patient's age: ");
	scanf("%d", &patient1.age);
	printf("Enter the patient's sex: ");
	scanf("%s", &patient1.gender);
	printf("Enter the patient's diagnosis: ");
	scanf("%s", &patient1.diagnosis);
	printf("Enter the patient's number of days admitted: ");
	scanf("%d", &patient1.days_admitted);
	
	printf("--------------------------------------------\n");
	printf("       PATIENT ADMISSION REPORT\n");
	printf("--------------------------------------------\n");
	printf("The patient's ID No is: %d \n", patient1.patients_id);
	printf("The patient is called: %s \n", patient1.patients_name);
	printf("The patient is %d old\n", patient1.age);
	printf("The patient is a %s\n", patient1.gender);
	printf("The patient has been diagnosed with: %s\n", patient1.diagnosis);
	printf("The patient has been admitted for %d days\n", patient1.days_admitted);
	return 0;
}