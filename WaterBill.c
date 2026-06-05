// program to display the water bills
/*
Name: Joshua Kioko
Reg NO: BCS-03-0067/2026
Version 1
*/
#include <stdio.h>

int main(){
	float units, totalbill;
	printf("Enter the number of units consumed: ");
	scanf("%f", &units);
	
	if (units > 60){
		totalbill = units * 30;
	}
	else if(units >= 31 && units <= 60){
		totalbill = units * 25;
	}
	else if(units >= 0 && units <= 30){
		totalbill = units * 20;
	}
	else{
		printf("Invalid entry. Try again please. \n");
		return 1;
	}
	printf("Total water bill: %.2f Kes", totalbill);
	
	return 0;
}