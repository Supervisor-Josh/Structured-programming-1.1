// program to display mobile data bundle purchase charges.

/*
NAME: Joshua Kioko.
REG NO: BCS-03-0067/2026
Version 1.
*/
#include <stdio.h>

int main(){
	int Option;
	printf("Option Bundle Cost(Kes)\n");
	printf("1. 100MB @ 50 Kes. \n");
	printf("2. 500MB @ 200 Kes. \n");
	printf("3. 1GB @ 350 Kes. \n");
	printf("4. 2GB @ 600 Kes. \n");
	
	printf("Dear customer, please enter your favourite bundle option (1-4): ");
	scanf("%d", &Option);
	if (Option < 1 || Option > 4){
		printf("Invalid Choice");
		return 1;
	}
	else if (Option == 1){
		printf("You selected 100MB. Cost = 50Kes\n");
	}
	else if(Option == 2){
		printf("You selected 500MB. Cost = 200Kes\n");
	}
	else if(Option == 3){
		printf("You selected 1GB. Cost = 350Kes\n");
	}
	else{
		printf("You selected 2GB. Cost = 600Kes\n");
	}
	return 0;
}
	
	