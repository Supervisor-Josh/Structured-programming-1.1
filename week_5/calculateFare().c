// program to compute fare

/*
Name: Joshua Kioko
Reg No: BCS-03-0067/2026
Version 1
*/

#include <stdio.h>

int main(){
	float distance, fare;
	printf("How long is the distance you are travelling in Kilometers: ");
	scanf("%f", &distance);
	fare = distance * 50;
	while(distance < 0){
		printf("Unapplicable distance. Try again: ");
		scanf("%f", &distance);
		fare = distance * 50;
	}
	printf("You are travelling a distance of %.2f Km to your destination. The fare is: Ksh %.2f", distance, fare);
	return 0;
}