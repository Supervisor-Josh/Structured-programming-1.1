// program to compute electric bill

/*
Name: Joshua Kioko
Reg No: BCS-03-0067/2026
Version 1
*/

#include <stdio.h>

int main(){
	int units;
	float bill;
	
	printf("Please enter the number of units consumed: \n");
	scanf("%d", &units);
	
	while(units < 0){
		printf("Units cannot be negative!\n Re-enter the units consumed: ");
		scanf("%d", &units);
	}
	if(units <= 100){
		bill = units * 10;
	}
	else if(units <= 200){
		bill = (100 * 10) + ((units - 100) * 15);
	}
	else{
		bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
	}
	printf("Your total bill is: Ksh. %.2f", bill);
	return 0;
}