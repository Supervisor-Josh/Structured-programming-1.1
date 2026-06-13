// bank atm program to allow withdrawals for an account balances greater than zero

/*
Name: Joshua Kioko
Reg No: BCS-03-0067/2026
Version 1
*/
#include <stdio.h>

int main(){
	float account_balance, amount, new_balance;
	printf("What is your bank account balance: ");
	scanf("%f", &account_balance);
	printf("Enter the amount to withdraw: ");
	scanf("%f", &amount);
	new_balance = account_balance - amount;
	printf("Your new bank account balance is %.2f\n", new_balance); 
	while (new_balance > 0)
	{
		printf("Enter the amount you wish to withdraw: ");
		scanf("%f", &amount);
		new_balance = new_balance - amount;
		printf("Your new account balance is %.2f\n", new_balance);
	}
	return 0;
	}