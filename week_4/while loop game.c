// program for a number guessing game

/*
Name: Joshua Kioko
Reg No: BCS-03-0067/2026
Version 1
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int guess, number, attempts = 0;
	number = (rand() % 20) + 1;
	printf("Guess any number of your choice between 1 and 20: ");
	scanf("%d", &guess);
	attempts++;
	
	while (guess != number)
	{
		if (guess > number){
			printf("Too High!\n");
		}
		if (guess < number){
			printf("Too Low!\n");
		}
		printf("Guess another number: ");
		scanf("%d", &guess);
		attempts++;
	}
	printf("Congratulations! You have guessed it in %d attempts.\n", attempts);
	return 0;
}