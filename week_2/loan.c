// program to display bank loan eligibility

/*
Name: Joshua Kioko
Reg NO: BCS-03-0067/2026
Date: 23/5/2026
Version 1
*/
#include <stdio.h>

int main(){
	int years, eligible;
	float income;
	
	printf("Enter your age: \n");
	scanf("%d", &years);
	
	printf("Enter your annual income: \n");
	scanf("%f", &income);
	
	eligible = years >= 19 && income >= 21000;
	if (eligible){
		printf("Congratulations, you qualify for a loan.\n");
	} else{
		printf("Unfortunaely, we are unable to offer you a loan at this time.\n");
	}
	return 0;
}