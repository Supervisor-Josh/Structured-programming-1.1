// program to prompt user to enter their password.
/*
Name: Joshua Kioko
Reg No: BCS-03-0067/2026
Version 1.
*/
#include <stdio.h>

int main(){
	int password, passwords;
	passwords = 1234;
	printf("Enter your password: ");
	scanf("%d", &password);
	if (password == passwords){
		printf("Access Granted");
	}
	else{
	do
	{
		printf("Re-enter your password: ");
		scanf("%d", &password);
	} while (password != passwords);
	printf("Access Granted");
	}
	return 0;
}