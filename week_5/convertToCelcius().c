// program to convert temperature to celcius

/*
Name: Joshua Kioko
Reg No: BCS-03-0067/2026
Version 1
*/
#include <stdio.h>

int main(){
	float fahrenheit, celcius;
	printf("Enter the temperature in Fahrenheits: ");
	scanf("%f", &fahrenheit);
	celcius = (fahrenheit - 32) * 5/9;
	printf("The temperature is approximately %.f celcius", celcius);
	return 0;
}