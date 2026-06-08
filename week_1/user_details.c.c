// program to display user's details

/*
Description: Program to display user's details
Name: Joshua Kioko
ADMN NO: BCS-03-0067/2026
Date: 5/02/2026
*/
#include <stdio.h>

int main(){
	/*
	float height ='m';
	*/
	char phone_number[20];
	float height;
	double bank_balance;
	
	printf("Enter your height: \n");
	scanf("%f", &height);
	
	printf("Enter your bank balance: \n");
	scanf("%lf", &bank_balance);
	
	printf("Enter your phone number: \n");
	scanf("%s", &phone_number);
	
	printf("Your height is %.2f\n", height);
	printf("Your bank balance is %.2lf \n", bank_balance);
	printf("Your phone number is %s\n", phone_number);
	return 0;
}
