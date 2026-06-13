// program for a number guessing game

/*
Name: Joshua Kioko
Reg No: BCS-03-0067/2026
Version 1
*/
#include <stdio.h>

int main(){
	int guess, number;
	printf("Guess any number of your choice between 1 and 20: ");
	scanf("%d", &guess);
	number = 9;
	while (guess != number)
	{
		if (guess > 9){
			printf("Too High!\n");
		}
		if (guess < 9){
			printf("Too Low!\n");
		}
		printf("Guess another number: ");
		scanf("%d", &guess);
	}
	printf("Congratulations!");
	return 0;
}