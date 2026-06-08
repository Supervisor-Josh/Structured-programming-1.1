// program to display the student's eligibility for exams.
/*
Name: Joshua Kioko
Reg NO: BCS-03-0067/2026
Version 1
*/
#include <stdio.h>

int main(){
	float Attendance, AverageMarks;
	printf("Enter the percentage class attendance: ");
	scanf("%f", &Attendance);
	
	printf("Enter the average marks: ");
	scanf("%f", &AverageMarks);
	
	if (Attendance >= 75 && AverageMarks >= 40){
		printf("Eligible");
	}
	else{
		printf("Not eligible");
	}
	return 0;
}