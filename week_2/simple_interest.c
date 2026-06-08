// a program to calculate simple interest

/*
Name: Joshua Kioko
Reg No: BCS-03-0067/2026
Version 1
*/
#include <stdio.h>

int main(){
	int time;
	float principal_amount, rate, simple_interest;
	printf("Enter your principal amount: ");
	scanf("%f", &principal_amount);
	
	printf("Enter the duration to return the money: ");
	scanf("%d", &time);
	
	printf("Enter the rates charged: ");
	scanf("%f", &rate);
	
	simple_interest = (principal_amount * time * rate) / 100;
	printf("The simple intrest is %.3f", simple_interest);
	return 0;
}